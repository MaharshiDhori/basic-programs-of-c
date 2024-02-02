#include<stdio.h>
#include<string.h>

// write data in the file

int main()
{
    FILE* ptr;

    char text[100];

    ptr = fopen("C:\\Users\\mahar\\Desktop\\two.txt", "w");

    if(ptr == NULL)
    {
        printf("File can't be opened\n");
    }
    else
    {
        printf("File is now opened.\n");
        
        printf("\nEnter the string: ");
        gets(text);

        if(strlen(text) > 0)
        {
            fputs(text, ptr);
            fputs("\n", ptr);
        }
    }

    fclose(ptr);

    printf("Data Scuccessfully written in the file\n");
    printf("File is now closed\n");

    return 0;
}