#include<stdio.h>
#include<string.h>

// comparing the length of two strings

int main()
{
    char text_1[100];
    int count_1 = 0;
    char text_2[100];
    int count_2 = 0;
    printf("Enter a string: ");
    scanf("%s", &text_1);

    for(int i = 0; text_1[i]!='\0'; i++)
    {
        count_1++;
    }

    printf("Enter a string: ");
    scanf("%s", &text_2);

    for(int j = 0; text_2[j]!='\0'; j++)
    {
        count_2++;
    }

    if(count_1 > count_2)
    {
        printf("The first string is longer than the second string.");
    }
    else if(count_1 < count_2)
    {
        printf("The second string is longer than the first string.");
    }
    else
    {
        printf("The first and second strings are of equal length.");
    }

    return 0;
}