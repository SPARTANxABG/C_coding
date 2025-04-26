#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{

    int random_number = 0;
    int guessed_number = 0;
    int counter = 0; 

    srand(time(NULL));
    random_number = rand() % 1000 + 1;

    printf("Please guess my number between 1 and 1000 : "); 

    while(1)
    {
        counter++; 

        scanf("%d", &guessed_number);

        if (guessed_number == random_number) 
        {
            printf("You guessed correctly in %d tries!\n", counter); 
            break;
        }

        if (guessed_number < random_number) 
            printf("Your guess is too low. Guess again: ");

        if (guessed_number > random_number) 
            printf("Your guess is too high. Guess again: ");
    } 

return 0;   
}