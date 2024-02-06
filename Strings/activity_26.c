#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr1, *ptr2, *ptr3;
    char ch;

    ptr1 = fopen("C:\\Users\\mahar\\Desktop\\one.txt", "r");
    if (ptr1 == NULL) 
    {
        printf("File can't be opened.");
    }
    
    ptr2 = fopen("C:\\Users\\mahar\\Desktop\\two.txt", "r");
    if (ptr2 == NULL) 
    {
        printf("File can't be opened.");
    }

    ptr3 = fopen("C:\\Users\\mahar\\Desktop\\three.txt", "w");

    while((ch = fgetc(ptr1)) != EOF)
    {
        fputc(ch, ptr3);
    }
    fputc('\n', ptr3);
    while ((ch = fgetc(ptr2)) != EOF)
    {
        fputc(ch, ptr3);
    }
    

    printf("Files merged successfully.");

    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);

    return 0;
}