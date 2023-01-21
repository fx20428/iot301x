/**
 * Author: Dzung Nguyen
 * Creation date: 01/18/2023
 * Purpose: This program calculates the perimeter and area of a rectangle then print them
 */

#include <stdio.h>

int main()
{
    float length = 5.7, width = 2.3, perimeter, area;
    perimeter = (length + width) * 2;
    area = length * width;
    printf("Chu vi cua hinh chu nhat co chieu dai %.2f va chieu rong %.2f la %.2f\n", length, width, perimeter);
    printf("Dien tich cua hinh chu nhat co chieu dai %.2f va chieu rong %.2f la %.2f\n", length, width, area);
    return 0;
}