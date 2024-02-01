#include<stdio.h>
#include<string.h>
#include<ctype.h>

//  Function to fromate the name of a person in uppercase letters

#define MAX_LENGTH 100

void formateName(char input[MAX_LENGTH])
{
    char firstName[MAX_LENGTH], lastName[MAX_LENGTH];

    if(sscanf(input, "%s %s", firstName, lastName) != 2)
    {
        printf("Error: Invalid input format. Please Enter both the first and last name\n");
        return ;
    }

    if(strchr(firstName, ' ') || strchr(lastName, ' '))
    {
        printf("Error: Avoid extra spaces in names.\n");
        return ;
    }

    if(strlen(firstName) == 0 || strlen(lastName) == 0)
    {
        printf("Error: First and Last name should not be empty.\n");
        return ;
    }
    
    lastName[0] = toupper(lastName[0]);
    printf("%s, %c.\n", lastName, toupper(firstName[0]));
}

int main()
{
    char userInput[MAX_LENGTH];

    printf("Enter a first name and last name: ");
    fgets(userInput, sizeof(userInput), stdin);

    userInput[strcspn(userInput, "\n")] = '\0';

    formateName(userInput);

    return 0;
}