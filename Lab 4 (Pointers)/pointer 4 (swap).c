#include <stdio.h>
void swap1(int *num1, int *num2);
void main (void)
{
    int num1,num2;
    printf("Num1: ");
    scanf("%d",&num1);
    printf("Num2: ");
    scanf("%d",&num2);
    swap1(&num1,&num2);
    printf("After swap: Num1 = %d , Num2 = %d",num1,num2);
}
void swap1(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
