#include <stdio.h>
void main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num > 0)
        printf("Number is Positive \n");
    else if (num < 0)
        printf("Number is Negative \n");
    else
        printf("Number is Zero \n");
}
