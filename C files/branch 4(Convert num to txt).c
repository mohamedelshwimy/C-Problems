#include <stdio.h>
void convertDigit(int num);
void convertTens(int num);
void convertAmountToText(int amount);
void main(void)
{
    int amount;
    printf("Enter an integer number (0-999): ");
    scanf("%d", &amount);
    printf("Amount in text: ");
    convertAmountToText(amount);
    printf("\n");
}

void convertDigit(int num)
{
    switch (num)
    {
    case 1:
        printf("One ");break;
    case 2:
        printf("Two ");break;
    case 3:
        printf("Three ");break;
    case 4:
        printf("Four ");break;
    case 5:
        printf("Five ");break;
    case 6:
        printf("Six ");break;
    case 7:
        printf("Seven ");break;
    case 8:
        printf("Eight ");break;
    case 9:
        printf("Nine ");break;
    }
}
void convertTens(int num)
{
    if (num >= 20)
    {
        switch (num / 10)
        {
        case 2:
            printf("Twenty ");break;
        case 3:
            printf("Thirty ");break;
        case 4:
            printf("Forty ");break;
        case 5:
            printf("Fifty ");break;
        case 6:
            printf("Sixty ");break;
        case 7:
            printf("Seventy ");break;
        case 8:
            printf("Eighty ");break;
        case 9:
            printf("Ninety ");break;
        }
        convertDigit(num % 10);
    }
    else if (num >= 10)
    {
        switch (num)
        {
        case 10:
            printf("Ten ");break;
        case 11:
            printf("Eleven ");break;
        case 12:
            printf("Twelve ");break;
        case 13:
            printf("Thirteen ");break;
        case 14:
            printf("Fourteen ");break;
        case 15:
            printf("Fifteen ");break;
        case 16:
            printf("Sixteen ");break;
        case 17:
            printf("Seventeen ");break;
        case 18:
            printf("Eighteen ");break;
        case 19:
            printf("Nineteen ");break;
        }
    }
    else
    {
        convertDigit(num);
    }
}

void convertAmountToText(int amount)
{
    if (amount == 0)
    {
        printf("Zero");
        return;
    }
    if (amount >= 100)
    {
        convertDigit(amount / 100);
        printf("Hundred ");
        amount %= 100;
    }
    convertTens(amount);
}

