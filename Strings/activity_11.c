#include<stdio.h>
#include<string.h>

// Counting the number of alphabets, digits and special characters in a string

int main()
{
    char text[100];
    printf("Enter the string:");
    gets(text);
    int n = strlen(text);
    int alpha_count = 0;
    int digit_count = 0;
    int special_count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 65 && text[i] <= 90 || text[i] >= 97 && text[i] <= 122)
        {
            alpha_count++;
        }
        else if (text[i] >= 48 && text[i] <= 57)
        {
            digit_count++;
        }
        else
        {
            special_count++;
        }
        
    }
    printf("Alphabest are : %d\nDigits are : %d\nSpecial characters are : %d", alpha_count, digit_count, special_count);
    return 0;
}