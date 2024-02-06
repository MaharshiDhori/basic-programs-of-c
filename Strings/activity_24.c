#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    int WordCount = 0;
    int charCount = 0;
    char text[1000];

    ptr = fopen("C:\\Users\\mahar\\Desktop\\one.txt", "r");

    if(ptr == NULL)
    {
        printf("File can't be opened\n");
        return 0;
    }
    
    while (fgets(text, sizeof(text), ptr) != NULL)
    {
        for(int i = 0; text[i] != '\0'; i++)
        {
            if(text[i] == ' ' && text[i+1] != ' ')
            {
                WordCount++;
            }
        }

        for(int i = 0; text[i]!='\0'; i++)
        {
            charCount++;
        }
    }

    if(text[strlen(text) - 1] != ' ')
    {
        WordCount++;
    }

    printf("Number of words in a file: %d", WordCount);
    printf("\nNumber of characters in a file: %d", charCount);
    fclose(ptr);

    return 0;
}