#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Nhao so thu nhat va so thu hai: ");
    scanf("%f%f", &a, &b);

    if (a != (int)a || b != (int)b)
        printf("So nhap vao khong phai so nguyen\n");
    else if (a == b)
        printf("So thu nhat bang so thu hai\n");
    else if (a > b)
        printf("So thu nhat lon hon so thu hai\n");
    else
        printf("So thu nhat nho hon so thu hai\n");

    return 0;
}