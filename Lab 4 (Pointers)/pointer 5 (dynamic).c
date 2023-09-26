#include <stdio.h>
#include <stdlib.h>
int find_max(int *arr,int size);
void main (void)
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int *arr =(int*)malloc(size * sizeof(int));
    for(int i=0;i<size;i++)
    {
        printf("Value[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
        printf("Value[%d]= %d \n",i,arr[i]);

    int max = find_max(arr, size);
    printf("The maximum element is: %d\n", max);
}
int find_max(int *arr,int size)
{
    int max = *arr;
    for(int i=0;i<size;i++)
    {
        if(*(arr+i) > max)
            max= *(arr+i);
    }
    return max;
}
