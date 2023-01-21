#include <stdio.h>

int main(void)
{
    unsigned int id, hours, hourlyRate, salary;

    printf("ID: ");
    scanf("%d", &id);
    printf("Total working hours: ");
    scanf("%d", &hours);
    printf("Hourly rate: ");
    scanf("%d", &hourlyRate);

    printf("ID: %d\n", id);
    printf("Salary: %d\n", hourlyRate * hours);
    return 0;
}