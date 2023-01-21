#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("%d\n", number | (1 << 4));
    return 0;
}