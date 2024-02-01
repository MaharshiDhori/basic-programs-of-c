#include<stdio.h>
#include<string.h>

// Calculating the length of a string without librery function

int main()
{
    char text[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", &text);

    for(int i = 0; text[i]!='\0'; i++)
    {
        length++;
    }
    printf("%d", length);

    return 0;
}