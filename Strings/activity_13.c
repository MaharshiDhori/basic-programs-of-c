#include<stdio.h>
#include<string.h>

// Sorting a string

int main()
{
    char text[100];
    printf("Enter the string: ");
    gets(text);
    int n = strlen(text);

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(text[i] > text[j])
            {
                char temp = text[i];
                text[i] = text[j];
                text[j] = temp;
            }
        }
    }

    printf("Sorted string: %s", text);
    return 0;
}