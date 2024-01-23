#include <stdio.h>
int isPrime(int n);
int main()
{
    int n;
    int flag = 0;
    printf("Enter the positive number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            flag = 1; // Set flag if the condition is satisfied
            break;
        }
    }

    if (flag == 1)
    {
        printf("%d can be expressed as the sum of two prime numbers.\n", n);
    }
    else
    {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    }

    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0; //  Not Prime
        }
    }
    return 1; // Prime
}