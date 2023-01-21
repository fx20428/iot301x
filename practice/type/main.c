#include <stdio.h>
#include <stdbool.h>

int main()
{
    int myInt1 = 1;
    int myInt2 = -1;
    printf("%d %d\n", myInt1, myInt2);

    float myFloat1 = 3.14f;
    double myDouble = 1.5e8f;
    printf("%.2f %.2f\n", myFloat1, myDouble);

    bool myBool = true;
    bool myBool2 = !myBool;
    printf("%d %d\n", myBool, myBool2);

    long myLong = 12345L;
    short myShort = 12;
    printf("%ld %d\n", myLong, myShort);

    printf("\xd8\n");
}