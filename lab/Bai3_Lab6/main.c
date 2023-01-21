#include <stdio.h>

int main(void)
{
    float temperature;

    printf("Nhap nhiet do: ");
    scanf("%f", &temperature);

    if (temperature <= 0)
        printf("Thời tiết lạnh cóng\n");
    else if (temperature <= 10)
        printf("Thời tiết rất lạnh\n");
    else if (temperature <= 20)
        printf("Thời tiết lạnh\n");
    else if (temperature <= 30)
        printf("Thời tiết nóng\n");
    else if (temperature <= 40)
        printf("Thời tiết rất nóng\n");
    else
        printf("Thời tiết rất rất nóng\n");

    return 0;
}