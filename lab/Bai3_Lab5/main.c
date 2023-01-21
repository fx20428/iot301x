#include <stdio.h>

int main(void)
{
    int totalDays, years, weeks, days;
    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);
    years = totalDays / 365;
    days = totalDays % 365;
    weeks = days / 7;
    days = days % 7;
    printf("sonam: %d\n", years);
    printf("sotuan: %d\n", weeks);
    printf("songay: %d\n", days);
    return 0;
}