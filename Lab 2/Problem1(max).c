#include <stdio.h>
#include <limits.h>
void main(void){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int i;
    int num;
    int max=INT_MIN;
    for(i=1;i<=n;i++)
    {
    printf("Enter %d integer ",i);
    scanf("%d",&num);
    if (num>max)
        max=num;
    }
    printf("The maximum number = %d",max);
}
