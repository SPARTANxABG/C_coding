#include <stdio.h>

int main(void)
{
    int tanks, gallons, miles, total_gallons, total_miles, original_tanks;
    float mpg, mpg_average;

    printf("Please enter the amount of tanks used during the trip: ");
    scanf("%d", &tanks);
    original_tanks = tanks;
    printf("\n");

    while (tanks <= 0)
    {
        printf("ERROR: No value entered!\n");
        printf("Please enter the amount of tanks used during the trip: ");
        scanf("%d", &tanks);
        original_tanks = tanks;
        printf("\n");
    }

    while (tanks > 0)
    {
        printf("Please enter the amount of gallons pumped into tank #%d: ", tanks);
        scanf("%d", &gallons);
        printf("Please enter the amount of miles driven while using tank #%d: ", tanks);
        scanf("%d", &miles);

        mpg = (float)miles / gallons;

        printf("The Miles/Gallon for tank #%d is %.2f\n", tanks, mpg);
        printf("\n");

        total_gallons = total_gallons + gallons;
        total_miles = total_miles + miles;
        --tanks;
    }

    mpg_average = (float)total_miles / (float)total_gallons;

    printf("The overall average miles/gallon was %.2f\n", mpg_average);
    printf("\n");

    return 0;
}