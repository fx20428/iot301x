#include <stdio.h>

int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}