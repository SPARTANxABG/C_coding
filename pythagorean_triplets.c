#include<stdio.h>

int main(void)
{
    int initia_range, final_range, a, b, c;

    printf("Please enter the range in which you want to search for Pythagorean Triplets.\nInitial: ");
    scanf("%d", &initia_range);
    printf("\nFinal: ");
    scanf("%d", &final_range);
    printf("\nThe Pythogorean Triplets in the given range are as follows:\n");
    for(a = initia_range; a <= final_range; a++)
    {
        for(b = a; b <= final_range; b++)
       {
            for(c = b; c <= final_range; c++)
            {
                if((c * c) == (a * a) + (b * b))
                {
                    printf("%d , %d , %d\n", a, b, c);
                }
            }
        }
    }
}