// WAP TO CREATE BANK ACCOUNT SYSTEM

#include <stdio.h>

struct Bank
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank customer;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &customer.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", customer.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &customer.balance);

    do
    {
        printf("\n===== BANK MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                customer.balance += amount;

                printf("Deposit Successful.\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= customer.balance)
                {
                    customer.balance -= amount;
                    printf("Withdrawal Successful.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", customer.balance);
                break;

            case 4:
                printf("\n----- ACCOUNT DETAILS -----\n");
                printf("Account Number : %d\n", customer.accountNo);
                printf("Account Holder : %s\n", customer.name);
                printf("Balance        : %.2f\n", customer.balance);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}