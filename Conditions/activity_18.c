#include<stdio.h>

void digitToWord(int n);

int main()
{
    int digit;
    printf("Enter any digit from 0 to 9 : ");
    scanf("%d", &digit);

    digitToWord(digit);

    return 0;
}


void digitToWord(int n)
{
    switch(n)
    {
        case 0 :
            printf("Zero\n");
            break;
        case 1 :
            printf("One\n");
            break;
        case 2 :
            printf("Two\n");
            break;
        case 3 :
            printf("Three\n");
            break;
        case 4 :
            printf("Four\n");
            break;
        case 5 :
            printf("Five\n");
            break;  
        case 6 :
            printf("Six\n");
            break;
        case 7 :
            printf("Seven\n");
            break;
        case 8 :
            printf("Eight\n");
            break;
        case 9 :
            printf("Nine\n");
            break;
        default : 
            printf("Invalid input.\n");
            break;
    }
}