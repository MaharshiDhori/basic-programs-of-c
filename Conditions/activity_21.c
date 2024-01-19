#include<stdio.h>

void checkGrade(char a);

int main()
{
    char ch;
    printf("Enter the grade: ");
    scanf("%c", &ch);

    checkGrade(ch);

    return 0;
}

void checkGrade(char a)
{
    switch(a)
    {
        case 'E' :
            printf("You have choosen : Excellent\n");
            break;
        case 'V' :
            printf("You have choosen : Very Good\n");
            break;
        case 'G' :
            printf("You have choosen : Good\n");
            break;
        case 'A' :
            printf("You have choosen : Average\n");
            break;
        case 'F' :
            printf("You have choosen : Fail\n");
            break;
        default :
            printf("You have choosen grade which is out of range.\n");
    }
}