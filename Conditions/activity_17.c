#include<stdio.h>

void checkDay(int n);

int main()
{
    int day;
    printf("Enter a number: ");
    scanf("%d", &day);

    checkDay(day);

    return 0;

}

void checkDay(int n)
{
    switch(n)
    {
        case 1 :
            printf("The day is sunday. \n");
            break;
        case 2 :
            printf("The day is monday. \n");
            break;
        case 3 :
            printf("The day is tuesday. \n");
            break;
        case 4 :
            printf("The day is wednesday. \n");
            break;
        case 5 :
            printf("The day is thursday. \n");
            break;
        case 6 :
            printf("The day is friday. \n");
            break;
        case 7 :
            printf("The day is saturday. \n");
            break;
        default :
            printf("Invalid input. \n");
            break;
    }
}

