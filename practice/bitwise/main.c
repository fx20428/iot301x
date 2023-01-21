#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 2;
    int c = (a <<= b);
    printf("%d\n", c);
    return 0;
}