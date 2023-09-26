#include<stdio.h>
void main(void)
{
    int i,size,j=0 , k=0;
    int arr[30],arr_odd[30], arr_even[30];
    printf("Enter array size : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the Integers : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if (arr[i]%2==0)
        {
            arr_even[j]=arr[i];
            j++;
        }
        else
        {
            arr_odd[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("Array Element[%d]: %d \n",i+1,arr[i]);

    }
    for(i=0;i<j;i++)
    {
        printf("Array Even Element[%d]: %d \n",i+1,arr_even[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("Array Odd Element[%d]: %d \n",i+1,arr_odd[i]);
    }
}

