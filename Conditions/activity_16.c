#include<stdio.h>

void checkVowels(char a);

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    checkVowels(ch);

    return 0;
}

void checkVowels(char a)
{
    if(a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u')
    {
        printf("The character is a vowel.\n");
    }
    else
    {
        printf("The character is a consonant.\n");
    }
}
