#include <stdio.h>

#define YEARS 5
#define MONTHS 12

int main()
{
    float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

    float subTotal = 0, total = 0;
    double subTotalInMonth = 0;
    for (int year = 0; year < YEARS; year++)
    {
        subTotal = 0;
        for (int month = 0; month < MONTHS; month++)
        {
            subTotal += rain[year][month];
        }
        printf("%5d:%15.1f\n", 2010 + year, subTotal);
        total += subTotal;
    }

    for (int month = 0; month < MONTHS; month++)
    {
        subTotalInMonth = 0;
        for (int year = 0; year < YEARS; year++)
        {
            subTotalInMonth += rain[year][month];
        }
        printf("%4.1f ", subTotalInMonth / YEARS);
    }
    printf("\n");
    return 0;
}