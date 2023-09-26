#include <stdio.h>
void main(void){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int i;
    int num;
    int avg=0;
    for(i=1;i<=n;i++)
    {
    printf("Enter [%d] integer ",i);
    scanf("%d",&num);
    avg=avg+num;
    }
    printf("The average of the numbers = %d",avg/n);
}
