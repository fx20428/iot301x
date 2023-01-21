#include <stdio.h>

int a = 20;
int main()
{
    // char a = '2';
    // enum primaryColors
    // {
    //     red,
    //     green,
    //     blue
    // };

    unsigned int x = 2;
    float y = 2.17;
    long double z = 2.17;

    printf("%u %0.2lf %0.2Lf\n", x, y, z);
    return 0;
}