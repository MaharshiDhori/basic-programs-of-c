#include<stdio.h>

// Sum of the series

int main()
{
    int n;
    int sum = 0;
    int k = 1;
    printf("Enter the terms: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("%d", k);

        if(i<n)
        {
            printf("+");
        }

        sum = sum+k;
        k = (k*10)+1;
    }
        printf("\n The sum of the series is : %d", sum);

    return 0;
}