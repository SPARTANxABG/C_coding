#include <stdio.h>

int main(void)
{
    int flight[11] = {0};
    char choice[2];

    int count = 0;
    int first_class = 1;
    int economy_class = 6;
    int response;

    printf("\nSTC Airport Reservation System\n\n Welcome\n");

    while (count < 10)
    {

        printf("\nPlease select your class:\n\n\t|First Class|\t\t:\tEnter 1\n\t|Economy Class|\t:\tEnter 2\n");
        scanf("&d", &response);

        if (response == 1)
        {
            {
                if (!flight[first_class] && first_class <= 5)
                {
                    printf("Your assigned seat number is %d\n", first_class);
                    flight[first_class++] = 1;
                    count++;
                }
                else if (first_class > 5 && economy_class <= 10)
                {
                    printf("\nFirst class has been filled for the current flight.");
                    printf("Would you like a seat in economy class instead? (Y or y for yes)");
                    scanf("%s", choice);

                    if (choice[0] == 'Y' || choice[0] == 'y')
                    {
                        printf("Your assigned seat number is %d\n", economy_class);
                        flight[economy_class++] = 1;
                        count++;
                    }
                    else
                    {
                        printf("The next flight will depart in 3 hours.\n");
                    }
                }
                else if (response == 2)
                {
                    if (!flight[economy_class] && economy_class <= 10)
                    {
                        printf(" Your assigned seat number is %d\n", economy_class);
                        flight[economy_class++] = 1;
                        count++;
                    }
                    else if (economy_class > 10 && first_class <= 5)
                    {
                        printf("\nEconomy class has been filled for the current flight.");
                        printf("Would you care for a first class seat? (Y or y for yes) ");

                        scanf("%s", choice);

                        if (choice[0] == 'Y' || choice[0] == 'y')
                        {
                            printf("Your seat assignment is %d\n", first_class);
                            flight[first_class++] = 1;
                            count++;
                        }
                        else
                        {
                            printf("The next flight will leave in 3 hours.\n");
                        }
                    }
                    else

                    {
                        ("Please select correct option\n");
                    }
                }
                printf("\nAll seats have been booked for this flight.");

                return 0;
            }
        }
    }
}