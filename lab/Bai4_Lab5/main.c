#include <stdio.h>

int main(void)
{
    int minutes, days, years;
    printf("Enter the total number of minutes: ");
    scanf("%d", &minutes);
    days = minutes / (60 * 24);
    years = days / 365;
    printf("days: %d\n", days);
    printf("years: %d\n", years);
}