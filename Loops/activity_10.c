#include<stdio.h>
// Displaing Natural number and their sum
int main()
{
    int n;
    printf("Enter the natural numbers: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", i);
        sum = sum + i;
    }

    printf("Natual number sum is:  %d", sum);
    return 0;
}