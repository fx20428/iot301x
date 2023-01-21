#include <stdio.h>

int main(void)
{
    float a, b, c, d;

    printf("First number: ");
    scanf("%f", &a);
    printf("Second number: ");
    scanf("%f", &b);
    printf("Third number: ");
    scanf("%f", &c);
    printf("Fourth number: ");
    scanf("%f", &d);

    printf("Average: %.2f\n", (a + b + c + d) / 4);
    return 0;
}