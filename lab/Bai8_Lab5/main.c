#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter 4 integer numbers:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);

    printf("Square of %d is %d\n", a, a * a);
    printf("Square of %d is %d\n", b, b * b);
    printf("Square of %d is %d\n", c, c * c);
    printf("Square of %d is %d\n", d, d * d);
    return 0;
}