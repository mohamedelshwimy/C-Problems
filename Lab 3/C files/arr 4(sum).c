#include<stdio.h>
int sum_iterative(int arr[],int size);
int sum_recursion(int arr[],int size);
void main(void)
{
    int size,i,sum;
    int arr[30];
    printf("Enter array size : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the Integers : ");
        scanf("%d",&arr[i]);
    }
    sum = sum_iterative(arr,size);
    printf("Sum of the Array = %d ",sum);

    int sum_rec= sum_recursion(arr,size);
    printf("\nSum of the Array = %d ",sum_rec);
}
int sum_iterative(int arr[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int sum_recursion(int arr[],int size)
{
    if (size == 0)
        return 0;

    return (sum_recursion(arr , size-1) + arr[size-1] );
}
