#include <stdio.h>

int main(void)
{
    int value, count = 0, total = 0;
    double average;

    printf("Please enter an integer: ");
    scanf("%d", &value);

    while (value != 9999)
    {
        total += value;
        count ++;

        printf("Please enter an integer value again, or enter 9999 to end: ");
        scanf("%d", &value);
    }

    if (count != 0)
    {
        average = (double)total / count;
        printf("The average is: %.2f\n", average);
    }
    else
    {
        printf("No values were entered");
    }

    return 0;
}