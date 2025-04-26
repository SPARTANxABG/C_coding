#include <stdio.h>

int main(void)
{
    int grade_1, grade_2, grade_3;
    float average_grade;

    printf("\n");
    printf("Please enter Grade 1: ");
    scanf("%d", &grade_1);
    printf("\n");

    printf("Please enter Grade 2: ");
    scanf("%d", &grade_2);
    printf("\n");

    printf("Please enter Grade 3: ");
    scanf("%d", &grade_3);
    printf("\n");

    average_grade = (grade_1 + grade_2 + grade_3) / 3;

    if (average_grade >= 90)
    {
        printf("Grade 1: %d\n", grade_1);
        printf("Grade 2: %d\n", grade_2);
        printf("Grade 3: %d\n", grade_3);
        printf("Average: %.1f\n", average_grade);
        printf("Letter Grade: A!\n");
        printf("\n");
    }
    if (average_grade <= 89 && average_grade >= 80)
    {
        printf("Grade 1: %d\n", grade_1);
        printf("Grade 2: %d\n", grade_2);
        printf("Grade 3: %d\n", grade_3);
        printf("Average: %.1f\n", average_grade);
        printf("Letter Grade: B!\n");
        printf("\n");
    }
    if (average_grade <= 79 && average_grade >= 70)
    {
        printf("Grade 1: %d\n", grade_1);
        printf("Grade 2: %d\n", grade_2);
        printf("Grade 3: %d\n", grade_3);
        printf("Average: %.1f\n", average_grade);
        printf("Letter Grade: C!\n");
        printf("\n");
    }
    if (average_grade <= 69 && average_grade >= 60)
    {
        printf("Grade 1: %d\n", grade_1);
        printf("Grade 2: %d\n", grade_2);
        printf("Grade 3: %d\n", grade_3);
        printf("Average: %.1f\n", average_grade);
        printf("Letter Grade: D!\n");
        printf("\n");
    }
    if (average_grade <= 59)
    {
        printf("Grade 1: %d\n", grade_1);
        printf("Grade 2: %d\n", grade_2);
        printf("Grade 3: %d\n", grade_3);
        printf("Average: %.1f\n", average_grade);
        printf("Letter Grade: F!\n");
        printf("\n");
    }
    
    return 0;
}