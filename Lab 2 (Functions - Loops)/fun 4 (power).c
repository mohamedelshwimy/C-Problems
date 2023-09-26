#include <stdio.h>
int pow_recursive(int base, int power);
int pow_iterative(int base, int power);
void main(void)
{
    int base,power;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&power);
    int result = pow_recursive(base, power);
    printf("%d raised to the power of %d is %d\n", base, power, result);
    result = pow_iterative(base, power);
    printf("%d raised to the power of %d is %d\n", base, power, result);
}
int pow_recursive(int base, int power)
{
    if (power == 0)
    return 1;
   else if (power == 1)
    return base;
   else
    return base * pow_recursive(base, power - 1);
}
int pow_iterative(int base, int power) {
  int result = 1;
  for (int i = 0; i < power; i++)
    {
    result *= base;
    }
  return result;
}
