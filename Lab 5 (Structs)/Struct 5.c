#include <stdio.h>
struct customer
{
  int acc_num;
  int balance;
  char name[50];
};
void printCustomer(struct customer c[], int n);
void addBalance(struct customer c[], int n);
void main(void)
{
    int n;
    struct customer c[100];
    printf("Enter the number of Customers: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Account number of Customer no. [%d]: ", i + 1);
        scanf("%d", &c[i].acc_num);

        printf("Enter the name of Customer no. [%d]: ", i + 1);
        scanf("%s", c[i].name);

        printf("Enter the balance of Customer no. [%d]: ", i + 1);
        scanf("%d", &c[i].balance);
        printf("----------------------------------\n");
    }
    printCustomer(c, n);
    printf("----------------------------------\n");
    addBalance(c, n);


}
void printCustomer(struct customer c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (c[i].balance < 200)
        {
            printf("Customer Name with balance less than 200$: %s \n",c[i].name);
        }
    }
}
void addBalance(struct customer c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (c[i].balance > 1000)
        {
            c[i].balance = c[i].balance + 100;
            printf("Customer Name: %s \nCustomer Balance: %d\n",c[i].name,c[i].balance);
        }
    }
}
