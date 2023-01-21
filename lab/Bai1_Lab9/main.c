// gcc main.c -lm
// This will tell gcc to link your code against the math lib.

#include <stdio.h>
#include <math.h>

int UCLN(int a, int b);
float giaTriTuyetDoi(float n);
long giaiThua(int m);
float khoangCach(float ax, float ay, float bx, float by);

int main()
{
    printf("%d\n", UCLN(16, 12));
    printf("%.2f\n", giaTriTuyetDoi(-10));
    printf("%ld\n", giaiThua(10));
    printf("%.2f\n", khoangCach(1, 2, 1, 1));
    return 0;
}

int UCLN(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

float giaTriTuyetDoi(float n)
{
    return n >= 0 ? n : -n;
}

long giaiThua(int m)
{
    if (m == 0)
    {
        return 1;
    }
    else
    {
        return m * giaiThua(m - 1);
    }
}

float khoangCach(float ax, float ay, float bx, float by)
{
    return sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
}