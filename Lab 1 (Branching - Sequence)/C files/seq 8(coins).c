#include <stdio.h>
//Fewest number of coins (1,5,10,25,50)
void main(void)
{
    int amount;
    int numCoins = 0;

    printf("Enter the amount of money to be paid: ");
    scanf("%d",&amount);

    // Calculate the number of 50 coins required
    numCoins = numCoins + (amount/50);
    amount = amount%50;
    // Calculate the number of 25 coins required
    numCoins = numCoins + (amount/25);
    amount = amount%25;
    // Calculate the number of 10 coins required
    numCoins = numCoins + (amount/10);
    amount = amount%10;
    // Calculate the number of 5 coins required
    numCoins = numCoins + (amount/5);
    amount = amount%5;
    // Calculate the number of 1 coins required
    numCoins = numCoins + amount;
    printf("The fewest number of coins required: %d\n", numCoins);

}
