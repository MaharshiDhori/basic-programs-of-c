#include<stdio.h>
#include<string.h>

//Separate the individual characters from a string

int main()
{
    char text[100];
    printf("Enter the string: ");
    gets(text);   // gets() function is used to read a string from the user.
    int n = strlen(text);


    for(int i = 0; i<n; i++)
    {
        printf("%c\n", text[i]);
    }

    return 0;
}