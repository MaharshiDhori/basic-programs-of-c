#include<stdio.h>
#include<string.h>
#include<ctype.h>

// Reverse the input string

#define MAX_LENGTH 100

int main()
{

    char textInput[MAX_LENGTH];
    int len;

    do
    {
        fgets(textInput, MAX_LENGTH, stdin);
        textInput[(len = strcspn (textInput, "\n"))] = 0;

        for (int i = len -1; i >= 0; i--)
        {
            printf("%c", textInput[i]);
        }
        printf("\n");

    } while (( strcmp(textInput, "Done") != 0 ) && ( strcmp(textInput, "done") != 0 ) && ( strcmp(textInput, "d") != 0 ) );
    

    return 0;
}