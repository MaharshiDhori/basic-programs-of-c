#include<stdio.h>

// Sum of first N natural numbers

int main()
{
    int num;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        sum += i;  //sum = sum + i;
    }
    printf("%d \n", sum);
    
    return 0;
}