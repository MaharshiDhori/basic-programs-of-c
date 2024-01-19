#include<stdio.h>

void checkAlphabet(char a);

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    checkAlphabet(ch);

    return 0;
}

void checkAlphabet(char a)
{
    if(a>=65 && a<=90)
    {
        printf("The character is Uppercase alphabet.\n");
    }
    else if(a>=97 && a<=122)
    {
        printf("The character is Lowercase alphabet.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }
}