#include <stdio.h>

int main(void)
{
    printf("char: %ld bytes\n", sizeof(char));
    printf("int: %ld bytes\n", sizeof(int));
    printf("long: %ld bytes\n", sizeof(long));
    printf("long long: %ld bytes\n", sizeof(long long));
    printf("float: %ld bytes\n", sizeof(float));
    printf("double: %ld bytes\n", sizeof(double));
    return 0;
}