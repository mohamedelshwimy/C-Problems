#include <stdio.h>
void swap(int n1, int n2);
void main(void)
{
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    swap(n1,n2);

}

void swap(int n1, int n2)
{
    int n3,n4;
    n3 = n2;
    n4 = n1;
    printf("After swapping: n1 = %d, n2 = %d\n", n3, n4);
}
