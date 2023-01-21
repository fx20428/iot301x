#include <stdio.h>

int main(void)
{
    int grades[10];       // Array storing 10 value
    int count = 10;       // Number of values to be read
    long sum = 0;         // Sum of the numbers
    float average = 0.0f; // Average of the numbers

    printf("Enter the 10 grades:\n"); // prompt the input
    for (int i = 0; i <= count; i++)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]); // Read a grade
        sum += grades[i];        // Add it to sum
    }

    average = (float)sum / count;
    printf("\nAverage of the grades entered is: %.2f\n", average);

    return 0;
}