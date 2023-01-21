#include <stdio.h>

int main(void)
{
    int a;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("So chan\n");
    else
        printf("So le\n");

    return 0;
}