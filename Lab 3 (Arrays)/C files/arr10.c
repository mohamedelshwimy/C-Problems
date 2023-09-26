#include <stdio.h>
void main(void)
{
    int size=0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    int i;
    printf("Enter %d integer number \n", size);
    for(i=0; i<size; i++)
            scanf("%d",&arr[i]);
    printf("Your Array Elements are: \n");
    for(i=0; i<size; i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("Your reversed Array Elements are: \n");
    for(i=size-1; i>=0; i--)
    {
        printf("%d \n",arr[i]);
    }
}
