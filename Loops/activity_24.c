#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <=10; i++)
    {
        int mul = n*i;
        printf("%d * %d = %d \n", n, i, mul);
    }
    
    return 0;
}