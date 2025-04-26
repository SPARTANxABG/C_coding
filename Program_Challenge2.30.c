// This program separates digits in an integer
#include <stdio.h>

int whole_number, number_1, number_2, number_3, number_4, number_5;

int main(void)
{
    printf("Please enter a 5 digit number for me to separate: ");
    scanf("%d", &whole_number);

    number_1 = (whole_number - number_5 - number_4 - number_3 - number_2) / 10000;
    number_2 = ((whole_number % 10000) - number_5 - number_4 - number_3) / 1000;
    number_3 = ((whole_number % 1000) - number_5 - number_4) / 100;
    number_4 = ((whole_number % 100) - number_5) / 10;
    number_5 = whole_number % 10;

    printf("%d   %d   %d   %d   %d\n", number_1, number_2, number_3, number_4, number_5);

    return 0;
}