#include <stdio.h>

#define NUM_GRADES 3 // Number of grades to input
#define PASS_MARK 70 // Passing mark for the average grade

// Function prototypes
float calculate_average(int grades[], int count);
void get_grades(int grades[], int count);

int main()
{
    int grades[NUM_GRADES]; // Array to store the grades
    float average;          // Variable to store the calculated average

    // Get grades from the user
    get_grades(grades, NUM_GRADES);

    // Calculate the average of the grades
    average = calculate_average(grades, NUM_GRADES);

    // Check if the average meets or exceeds the passing mark
    if (average >= PASS_MARK)
    {
        // Output if the student passed
        printf("The student passed the course. Their average was: %.2f\n", average);
    }
    else
    {
        // Output if the student failed
        printf("The student failed the course. Their average was: %.2f\n", average);
    }

    return 0;
}

// Function to calculate the average of an array of grades
float calculate_average(int grades[], int count)
{
    int sum = 0; // Variable to accumulate the sum of grades

    // Sum all the grades
    for (int i = 0; i < count; i++)
    {
        sum += grades[i];
    }

    // Return the average as a float
    return (float)sum / count;
}

// Function to get grades from the user
void get_grades(int grades[], int count)
{
    // Loop to get input for each grade
    for (int i = 0; i < count; i++)
    {
        printf("Enter grade %d: \n", i + 1);

        // Read the input and handle invalid input
        while (scanf("%d", &grades[i]) != 1)
        {
            // Inform the user of invalid input
            printf("Invalid input. Please enter an integer: \n");
            // Clear invalid input from the buffer
            while (getchar() != '\n');
        }
    }
}
