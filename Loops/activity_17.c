#include<stdio.h>

int main()
{
    char i;
    printf("All the upeercase alphabets: \n");
    for ( i = 'A'; i < 'Z'; i++)
    {
        printf("%c ", i);
    }

    printf("\n");

    printf("All the lowercase alphabets: \n");
    for ( i = 'a'; i < 'z'; i++)
    {
        printf("%c ", i);
    }
    
    return 0;
}