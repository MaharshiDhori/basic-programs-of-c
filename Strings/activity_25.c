#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr1, *ptr2;
    char text;

    ptr1 = fopen("C:\\Users\\mahar\\Desktop\\one.txt", "r");

    if(ptr1 == NULL)
    {
        printf("File can't be opened.");
    }

    ptr2 = fopen("C:\\Users\\mahar\\Desktop\\two.txt", "w");

    while (1)
    {
        text = fgetc(ptr1);
        if(text == EOF)
        {
            break;
        }
        else
        {
            fputc(text, ptr2);
        }
    }

    printf("File copied successfully.");

    fclose(ptr1);
    fclose(ptr2);
    
    return 0;
}