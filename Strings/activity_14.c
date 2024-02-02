#include<stdio.h>
#include<string.h>

// Concatenating two strings

int main()
{
    char text_1[100], text_2[100];
    printf("Enter the first string: ");
    gets(text_1);
    char text_3[100];
    
    int i = 0, j = 0;
    while (text_1[i] != '\0')
    {
        text_3[j] = text_1[i];
        i++;
        j++;
    }
    

    printf("Enter the second string: ");
    gets(text_2);
    i = 0;
    while (text_2[i] != '\0')
    {
        text_3[j] = text_2[i];
        i++;
        j++;
    }

    text_3[j] = '\0';

    printf("%s", text_3);

    return 0;
}