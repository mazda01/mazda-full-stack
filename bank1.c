#include <stdio.h>
#include <string.h>

char account[11];
char name[10];
int amount;
int TaskNumber;

void Account();
void Name();
void Balance();
void Print();

int main()
{
    printf("\n*Project 2 - Banking Management System");
    printf("\n    1- Create Account");
    printf("\n    2- Deposit");
    printf("\n    3- Withdraw");
    printf("\n    4- check  balance");
    printf("\n    0- Exit");

    while (1)
    {

        printf("\n\nPlease enter the task number : ");
        scanf("%d", &TaskNumber);

        if (TaskNumber == 1)
        {
            Account();
            Name();
            Balance();
            Print();
        }
        else if (TaskNumber == 2)
        {
        }
        else if (TaskNumber == 3)
        {
        }
        else if (TaskNumber == 4)
        {
        }
        else if (TaskNumber == 0)
        {
            break;
        }
        else
        {
            printf("\nInvalid TaskNumber");
        }
    }

    return 0;
}
void Account()
{

    while (1)
    {
        printf("Please Enter 11 digit Account Number only: ");
        scanf("%s", &account);
        if (strlen(account) == 11)
        {
            break;
        }
    }
}
void Name()
{
    printf("Please Enter Account Holder Name: ");
    scanf("%s", &name);
}
void Balance()
{
    while (1)
    {
        printf("Please Enter Balance (Opening Amount would be 500 mininum) ");
        scanf("%d", &amount);
        if (amount >= 500)
        {
            break;
        }
    }
}
void Print()
{

    printf("\nThank You to join India Bank");
    printf("\nYour Account Details");
    printf("\nAccount Number : %s", account);
    printf("\nAccount Holder Name : %s", name);
    printf("\nAccount Balance : %d", amount);
}