#include <stdio.h>

void checkArmstrong(int n);

int main()
{
    int numF;
    printf("Enter the first number: \n");
    scanf("%d", &numF);

    int numL;
    printf("Enter the last number: \n");
    scanf("%d", &numL);

    printf("Armstrong Numbers are below: \n");

    for (int i = numF; i <= numL; i++)
    {
        checkArmstrong(i);
    }

    return 0;
}

void checkArmstrong(int n)
{
    int x;
    int sum = 0;
    x = n;
    while(n>0)
    {
        sum = sum + (n%10)*(n%10)*(n%10);
        n /=10;
    }
    if(sum==x)
    {
        printf("%d ", x);
    }
}