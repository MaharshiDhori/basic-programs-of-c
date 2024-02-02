#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// covering spcaes with sopecific character from the file

int main()
{
    FILE* ptr;
    char text[100];

    ptr = fopen("C:\\Users\\mahar\\Desktop\\one.txt", "r");

    if(ptr == NULL)
    {
        printf("File can't be opened\n");
    }

    printf("Content of the file are : \n");

    while(fgets(text,sizeof(text),ptr) != NULL)
    {
        for (int i = 0; i < strlen(text); i++)
        {
            if (text[i] == ' ')
            {
                text[i] = '-';
            }    
        }
        
        printf("%s", text);
    }

    fclose(ptr);

    return 0;
}