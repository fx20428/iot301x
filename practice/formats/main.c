#include <stdio.h>
#include <stdbool.h>

int main()
{
    int integerVar = 100;

    float floatingVar = 331.79;

    double doubleVar = 8.44e+11;

    char charVar = 'W';

    bool boolVar = 0;

    printf("integerVar = %i\n", integerVar); /* Hiển thị số nguyên hệ thập phân*/

    printf("floatingVar = %f\n", floatingVar); /* Hiển thị số thực hệ thập phân*/

    printf("doubleVar = %e\n", doubleVar); /* Hiển thị số thập phân dạng khoa học*/

    printf("doubleVar = %g\n", doubleVar); /* Hiển thị dạng rút gọn của %e */

    printf("charVar = %c\n", charVar); /* Hiển thị ký tự*/

    printf("boolVar = %i\n", boolVar); /* Hiển thị số nguyên đại diện cho kiểu bool*/

    return 0;
}