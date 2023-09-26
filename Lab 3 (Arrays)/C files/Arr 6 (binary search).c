#include<stdio.h>
int arr_position(int arr[],int size,int value);
int binary_search(int arr[], int low, int high, int value);
void main(void)
{
    int size,i,value,position;
    int arr[30];
    int low,high;
    printf("Enter array size : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the Integers : ");
        scanf("%d",&arr[i]);
    }

    printf("Enter required value: ");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
        printf("Array Element[%d]: %d \n",i+1,arr[i]);

    }
    position= arr_position(arr,size,value);
    printf("The position of the value = %d",position);

    low=0;
    high=size-1;
    position= binary_search(arr,low,high,value);
    printf("\nThe position of the value = %d",position);
}
int arr_position(int arr[],int size,int value)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==value)
            return i+1;
    }
    return -1;
}
int binary_search(int arr[], int low, int high, int value)
{
    if (low <= high)
        {
        int mid = low + (high - low) / 2;

        if (arr[mid] == value)
            return mid;

        if (arr[mid] < value)
            return binary_search(arr, mid + 1, high, value);

        return binary_search(arr, low, mid - 1, value);
        }

    return -1;
}
