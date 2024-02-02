#include<stdio.h>
#include<string.h>

// Finding the maximum character in a string

int main()
{
    char text[100];
    printf("Enter the string:");
    gets(text);
    int n =strlen(text);
    char max;
    for(int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(text[i] == text[j])
            {
                max = text[j];
            }
        }
    }
    printf("maximum character: %c", max);
    return 0;
}