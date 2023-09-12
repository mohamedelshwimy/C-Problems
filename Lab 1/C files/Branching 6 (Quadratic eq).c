#include <stdio.h>
#include <math.h>
void main(void)
{
    float a,b,c,Discriminant,root1,root2,real,imaginary;
    printf("Enter the coefficients a,b,c (aX^2 + bX + C = 0): ");
    scanf("%f%f%f",&a,&b,&c);
    Discriminant= (b*b) - (4*a*c);
    if(Discriminant>0)
    {
        //roots are real and distinct (unequal)
        root1 = (-b + sqrt(Discriminant))/(2*a);
        root2 = (-b - sqrt(Discriminant))/(2*a);
        printf("roots are real and distinct (unequal): \n");
        printf("Root 1 = %.2f \n",root1);
        printf("Root 2 = %.2f \n",root2);
    }
    else if(Discriminant=0)
    {
        //roots are real and equal
        root1 = root2 = -b / (2*a);
        printf("roots are real and equal: \n");
        printf("Root = %.2f \n",root1);
    }
    else
    {
        //roots are imaginary and unequal
        real = -b / (2*a);
        imaginary = sqrt(-Discriminant) / (2*a);
        printf("roots are imaginary and unequal: \n");
        printf("Root 1: %.2lf + %.2lfi\n", real, imaginary);
        printf("Root 2: %.2lf - %.2lfi\n", real, imaginary);
    }
}
