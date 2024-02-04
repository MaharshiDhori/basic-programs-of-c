#include<stdio.h>
#include<string.h>

// Function to trim the string

void trimString(char s[]);

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", s);

    trimString(s);

    printf("Modified string: %s\n", s);

    return 0;
}

void trimString(char s[])
{
    int i, j = 0;

    // Iterate through the string
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            // If the character is not a space, copy it to the new position
            s[j++] = s[i];
        }
    }

    // Null-terminate the trimmed string
    s[j] = '\0';
}
