#include <stdio.h>

int main(void)
{
    int acc_num;
    float total_credits, credits_limit, total_balance, beginning_balance, total_charges;

    printf("Please enter the last four digits of your account number: ");
    scanf("%d", &acc_num);
    printf("\n");

    printf("Please enter your beginning balance for the month: ");
    scanf("%f", &beginning_balance);
    printf("\n");

    printf("Please enter the total charges of all items: ");
    scanf("%f", &total_charges);
    printf("\n");


    printf("Please enter the total credit amount: ");
    scanf("%f", &total_credits);
    printf("\n");


    printf("Please enter the allowed credit limit: ");
    scanf("%f", &credits_limit);
    printf("\n");

    total_balance = beginning_balance + total_charges - total_credits;

    if (total_balance > credits_limit)
    {
        printf("Last 4 digits of account number: %d\n", acc_num);
        printf("Your credit limit: %.2f\n", credits_limit);
        printf("Your balance: %.2f\n", total_balance);
        printf("Credit Limit Exceeded!\n");
        printf("\n");
    }
    else
    {
        printf("Last 4 digits of account number: %d\n", acc_num);
        printf("Your credit limit: %.2f\n", credits_limit);
        printf("Your balance: %.2f\n", total_balance);
        printf("Credit Limit NOT Exceeded\n");
        printf("\n");
    }

    return 0;
}