#include <stdio.h>

int main(void)
{
    int side_a, side_b, side_c, hypotenuse, total_a, total_b, total_a_b;

    printf("Please enter side A of a triangle: ");
    scanf("%d", &side_a);
    printf("\n");

    printf("Please enter side B of a triangle: ");
    scanf("%d", &side_b);
    printf("\n");

    printf("Please enter the hypotenuse (side C): ");
    scanf("%d", &side_c);
    printf("\n");

    total_a = side_a * side_a;

    total_b = side_b * side_b;

    hypotenuse = side_c * side_c;

    total_a_b = total_a + total_b;

    if (hypotenuse == total_a_b)
    {
        printf("The triangle is a right triangle!\n");
    }
    else
    {
        printf("The triangle is not a right triangle!\n");
    }

    return 0;
}