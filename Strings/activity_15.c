#include<stdio.h>
#include<string.h>

// Find largest and smallest word from the string

int main()
{
    char text[100];
    char words[100][100], small[100], large[100];
    printf("Enter the string:");
    // gets(text);
    fgets(text, sizeof(text), stdin);
    printf("%s", text);

    int i = 0, j = 0, k, length;
    
    for(int k = 0; text[k] != '\0'; k++)
    {
        if(text[k] != ' ' && text[k]!='\0'  )
        {
            words[i][j++] = text[k];
        }

        else
        {
            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }

    length = i+1;

    strcpy(small, words[0]);
    strcpy(large, words[0]);

    for(k=0; k < length; k++)
    {
        if(strlen(small) > strlen(words[k]))
        {
            strcpy(small, words[k]);
        }

        if(strlen(large) < strlen(words[k]))
        {
            strcpy(large, words[k]);
        }
    }

    printf("\nSmallest word: %s\n", small);
    printf("Longest word: %s\n", large);
    
    return 0;
}