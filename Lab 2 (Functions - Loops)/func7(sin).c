#include <stdio.h>
#include <math.h>
#define PI 3.14159
double calc_sin(double value)
{
    return sin((value*PI)/180);
}

void main(void)
{
    double input;
    printf("Enter a number: ");
    scanf("%lf", &input);

    double result = calc_sin(input);
    printf("The sine of %lf is %lf\n", input, result);

    return 0;
}
