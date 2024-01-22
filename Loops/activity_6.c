#include <stdio.h>
// Check the number is palindrom or not
int main()
{
    int num, temp, reverse=0;
    printf("Enter the numebr: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    }

    if (reverse == temp)
    {
        printf("Given number is palindrom.");
    }
    else
    {
        printf("Given number is not palindrom.");
    }

    return 0;
}