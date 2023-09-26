#include <stdio.h>
void main(void)
{
    float income;
    float tax;
    printf("Enter your income: ");;
    scanf("%f",&income);
    if (income <= 7000)
        printf("Exempted");
    else if (income > 7000 && income <= 20000)
    {
        tax=income*0.1;
        printf("Your Taxes [10%%] = %.2f",tax );
    }
    else if (income > 20000 && income <= 45000)
    {
        tax=income*0.15;
        printf("Your Taxes [15%%] = %.2f",tax );
    }
    else if (income > 45000 && income <= 200000)
    {
        tax=income*0.2;
        printf("Your Taxes [20%%] = %.2f",tax );
    }
    else
    {
        tax=income*0.4;
        printf("Your Taxes [40%%] = %.2f",tax );
    }
}
