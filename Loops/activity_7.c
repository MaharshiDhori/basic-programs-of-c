#include <stdio.h>
int main()
{
    int num, rem=0, sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("Given number is perfect number.");
    }
    else
    {
        printf("Given number is not perfect number.");
    }
    return 0;
}