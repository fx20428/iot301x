#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf(">: ");
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] > arr[k])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] < arr[k])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}