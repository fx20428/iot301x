#include <stdio.h>

int main(void)
{
    int firstNum, secondNum;

    printf("Enter the first number: ");
    scanf("%d", &firstNum);
    printf("Enter the second number: ");
    scanf("%d", &secondNum);

    if (secondNum == 0)
    {
        printf("Can not divided by zero\n");
    }
    else
    {
        printf("%d / %d = %d\n", firstNum, secondNum, firstNum / secondNum);
    }

    return 0;
}