#include<stdio.h>
#include<string.h>

//Displaying comma-separated values after removing leading 
//and trailing spaces from each element in a string array


int main()
{
    char inputLine[255];
    char cleanedValue[255];

    printf("Enter a line of comma-separated values: ");
    fgets(inputLine, sizeof(inputLine), stdin);

    if(inputLine[strlen(inputLine) - 1] == "\n")
    {
        inputLine[strlen(inputLine) - 1] = "\0";
    }

    char *token = strtok(inputLine, ",");

    while(token != NULL)
    {
        strcpy(cleanedValue, token);


        //Remove leading Spaces
        int i = 0;
        while (cleanedValue[i] == ' ')
        {
            i++;
        }
        strcpy(cleanedValue, cleanedValue + i);

        //Remove trailing spaces
        i = strlen(cleanedValue - 1);
        while(i>0 && cleanedValue[i] == ' ')
        {
            cleanedValue[i] = '\0';
            i--;
        }

        printf("%s\n", cleanedValue);

        token = strtok(NULL, ",");
    }

    return 0;
}