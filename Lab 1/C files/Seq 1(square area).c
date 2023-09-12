#include <stdio.h>
void main(void)
{
   float side;
   float area;
   printf("Enter Square side length: ");
   scanf("%f",&side);
   area=side*side;
   printf("Area of Square with side length[%.2f]= %.2f",side,area);
}

