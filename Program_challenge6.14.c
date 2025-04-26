#include <stdio.h>

int duplicate(int array[], int size, int value)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[20];
    int i;
    printf("Please enter 20: ");
    for (i = 0; i < 20; ++i)
    {
        scanf("%d", array + i);
    }

    // display numbers here
    printf("You have entered: ");
    for (i = 0; i < 20; ++i)
    {
        if (duplicate(array, i - 1, array[i]) == -1)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
    return 0;
}