#include<stdio.h>
#include<string.h>

// Counting the number of words in a string

int main()
{
    char text[100];
    printf("Enter the string:");
    gets(text);
    int n = 0;

    for(int i = 0; text[i]!='\0'; i++)
    {
        if(text[i]==' ' && text[i+1]!= ' ')
        {
            n++;
        }
    }

    printf("Number of words: %d", n+1);

    return 0;
}