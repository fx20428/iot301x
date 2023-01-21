#include <stdio.h>

int main(void)
{
    int i;
    int thirdBit;
    printf("Enter an integer: ");
    scanf("%d", &i);
    thirdBit = (i >> 2) & 1;
    printf("The third bit is %d\n", thirdBit);
    return 0;
}