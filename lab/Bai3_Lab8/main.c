#include <stdio.h>
#include <stdbool.h>

int main()
{
    int primes[100];
    int primeIndex = 2;
    bool isPrime;
    primes[0] = 2;
    primes[1] = 3;

    for (int i = 4; i <= 100; i++)
    {
        isPrime = true;
        for (int j = 0; j < primeIndex; j++)
        {
            if (i % primes[j] == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            primes[primeIndex] = i;
            primeIndex++;
        }
    }

    for (int i = 0; i < primeIndex; i++)
    {
        printf("%d ", primes[i]);
    }

    printf("\n");
    return 0;
}