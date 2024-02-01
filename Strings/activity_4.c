#include<stdio.h>
#include<string.h>

int main()
{
    FILE* filepointer;

    char dataToBeWritten[50] = "Hello world!";

    filepointer = fopen("one.text", "w");

    if(filepointer == NULL)
    {
        printf("File failed to open\n");
    }
    else
    {
        printf("The file is now opened.\n");

        if(strlen(dataToBeWritten) > 0)
        {
            fputs(dataToBeWritten, filepointer); // Writes the string into the file
            printf("%s written successfully!\n", dataToBeWritten);
        }

        fclose(filepointer);

        printf("Data successfully written in file one.txt\n");
        printf("The file is now closed.");
    }

    return 0;
}