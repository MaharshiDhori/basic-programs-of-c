#include<stdio.h>
#include<string.h>

// covering spcaes with sopecific character

int main()
{
    char text[100];
    printf("Enter the string:");
    gets(text);

    for(int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            text[i] = '*';
        }
    }

    printf("%s", text);
    return 0;
}