#include <stdio.h>
#include <string.h>

//Counting number of lines in the file

int main()
{
    FILE *ptr;
    char text[100];
    char lines[100][100];
    int i = 0;

    ptr = fopen("C:\\Users\\mahar\\Desktop\\two.txt", "r");

    if (ptr == NULL)
    {
        printf("File can't be opened\n");
    }

    while (fgets(text, sizeof(text), ptr) != NULL)
    {
        if (i < 100)
        {
            strncpy(lines[i], text, 100);
            i++;
        }
        else
        {
            printf("Warning: Maximum number of lines reached. Ignoring the rest of the file.\n");
            break;
        }
    }
    

    fclose(ptr);

    printf("Number of lines read from the file:\n");
    printf("%d", i);

    return 0;
}