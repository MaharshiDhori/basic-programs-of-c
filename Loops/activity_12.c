#include <stdio.h>
void checkNumber(int n);

int main()
{
    int number;
    char ch;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Press x to exit\n");
    scanf("%c", &ch);

    while(ch!='x')
    {
        checkNumber(number);
        printf("Enter the number: ");
        scanf("%d", &number);
        printf("Press x to exit\n");
        scanf("%c", &ch);
    }

    if(ch=='x')
    {
        printf("Exiting the program");
    }

    return 0;
}


void checkNumber(int n)
{
        if (n < 0)
        {
            printf("Negative number\n");
        }
        else if (n > 0)
        {
            printf("Positive number\n");
        }
        else
        {
            printf("Zero\n");
        }
    
}