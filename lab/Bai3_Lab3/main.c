/*
 * This is Lab No3.3, created by Nguyen Nghia Dung
 * Date of creation: 1/17/2023
 * Purpose: Input and output data using scanf and printf
 */

#include <stdio.h>

int main()
{
    char ten[32];  // tao mot bien mang kieu char voi kich thuoc 32 phan tu
    printf("What is your name: ");  // hien thi ra man hinh
    scanf("%s", ten);   // nhap du lieu tu ban phim
    printf("Hello %s. How are you?\n", ten); // hien thi ra man hinh
    return 0;
}
