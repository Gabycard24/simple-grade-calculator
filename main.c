#include <stdio.h>
// Ask for the grades of 3 subjects for the same student.
// Add them and calculate the average.
// If the average is greater than or equal to 70 (or 7), the student passes; otherwise, the student fails.

int main()
{
    float average;
    int grade1, grade2, grade3;
    printf("Enter the first grade: \n");
    scanf("%i", &grade1);
    printf("Enter the second grade: \n");
    scanf("%i", &grade2);
    printf("Enter the third grade: \n");
    scanf("%i", &grade3);

    average = (grade1 + grade2 + grade3) / 3.0;

    if(average >= 70)
    {
        printf("The student passed the course, their average was: %f\n", average);
    }
    else
    {
        printf("The student failed the course, their average was: %f\n", average);
    }
}
