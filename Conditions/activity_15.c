#include <stdio.h>
void charCheck(char a);

int main()
{
    char character;
    printf("Enter a character : \n");
    scanf("%c", &character);

    charCheck(character);

    return 0;
}

void charCheck(char a)
{
    if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
    {
        printf("The character is an alphabet.\n");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("The character is a digit.\n");
    }
    else if (a >= 32 && a <= 47 || a >= 58 && a <= 68 || a >= 91 && a <= 96 || a >= 123 && a <= 127)
    {
        printf("The character is a special character.\n");
    }
}