// This program will determine if first integer is a multiple of the second integer
#include <stdio.h>

int number_1, number_2, answer;

int main(void)
{
    printf("This program will determine if first integer is a multiple of the second integer\n");

    printf("Please enter a digit: ");
    scanf("%d", &number_1);

    printf("Please enter a second digit: ");
    scanf("%d", &number_2);

    // Use Remainder Operator
    answer = number_1 % number_2;

    while (answer == 0)
    {
        printf("%d is a multiple of %d\n", number_1, number_2);
        break;
    }
    while (answer != 0)
    {
        printf("%d is not a multiple of %d\n", number_1, number_2);
        break;
    }
    
    return 0;
}