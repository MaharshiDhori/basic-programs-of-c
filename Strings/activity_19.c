#include<stdio.h>
#include<string.h>

// check if string contains a number or not

int main()
{
    char text[100];
    printf("Enter the string: ");
    gets(text);
    
    for(int i = 0; i<strlen(text); i++)
    {
        if(text[i] >= 49 && text[i] <= 57)
        {
            printf("The string contains a number\n");
            return 0;
        }
        printf("%c\n", text[i]);
    }
    return 0;
}