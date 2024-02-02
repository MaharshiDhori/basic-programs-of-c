#include<stdio.h>
#include<string.h>

// String to uppercase

int main()
{
    char text[100];
    printf("Enter the string: ");
    gets(text);
    printf("Converting to uppercase: %s", strupr(text));    //Librery Function


    // Convert string to uppercase without librery function

    // for(int i = 0; text[i] != '\0'; i++)
    // {
    //     if(text[i] >= 'a' && text[i] <= 'z')
    //     {
    //         text[i] = text[i] - 32;
    //     }
    // }

    // printf("String in Uppercase: %s", text);

    return 0;   
}