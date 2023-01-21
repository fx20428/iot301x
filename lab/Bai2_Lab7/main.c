#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 65, b = 0;
    printf("So can doan co 2 chu so\n");
    while (true)
    {
        scanf("%d", &b);
        if (a != b)
            printf("Ban da doan sai\n");
        else
            break;
    }
    printf("Xin chuc mung, ban da doan dung.\n");
    return 0;
}