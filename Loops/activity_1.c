#include<stdio.h>
int main()
{
    int value = 0;
    printf("Enter the value: ");
    scanf("%d", &value);

    int count = 0;
    while(count<=5)
    {
        int mul = value*count;
        printf("%d * %d = %d\n", count, value, mul);
        count++;
    }
    
    return 0;
}