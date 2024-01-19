#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    int i;
    int j;
    for (i = 0; i<strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            for (j=i; j<strlen(s) - 1; j++)
            {
                s[j] = s[j+1];
            }
            s[j] = '\0';
            i--;
            
        }
        
    }
    printf("Modified string: %s\n", s);
    
    return 0;
}