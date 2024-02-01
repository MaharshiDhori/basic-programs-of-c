#include<stdio.h>
#include<string.h>

//Reversing all the characters of string

int main()
{
    char str[40];
    printf("Enter a string: ");
    scanf("%s", &str);

    printf("After reverse the string: %s", strrev(str));
    
    return 0;
}