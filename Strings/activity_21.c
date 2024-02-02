#include<stdio.h>
#include<string.h>

// Read and exit the file

int main()
{
    FILE* ptr;
    char text[100];

    ptr = fopen("C:\\Users\\mahar\\Desktop\\two.txt", "r");

    if(ptr == NULL)
    {
        printf("File can't be opened\n");
    }

    while (fgets(text, sizeof(text), ptr) != NULL)
    {
        printf("%s", text);
    }

    fclose(ptr);
    printf("File is now closed\n");
    return 0;
}