#include <stdio.h>
#define PI 3.14
void main(void)
{
   float radius;
   float area;
   printf("Enter Circle Radius: ");
   scanf("%f",&radius);
   area=PI*radius*radius;
   printf("Area of Circle with Radius[%.2f]= %.2f",radius,area);
}

