#include<stdio.h>
int convertToBinary_iterative(int num);
int convertToBinary_recursion(int num);
void main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    convertToBinary_iterative(num);
    printf("\n");
    convertToBinary_recursion(num);
}
int convertToBinary_iterative(int num)
{
    int bin = 0;
    int rem = 0;
    int place = 1;
    while(num>0)
    {
        rem   = num % 2;
        num   = num / 2;
        bin   = bin + (rem * place);
        place = place * 10;
    }
     printf("%d\n", bin);

}
int convertToBinary_recursion(int num)
{
    if(num>0)
    {
        convertToBinary_recursion(num / 2);
        printf("%d",num%2);
    }
}
