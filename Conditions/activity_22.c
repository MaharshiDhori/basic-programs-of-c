#include<stdio.h>

void findNumberofDaysInMonth(int n);

int main()
{
    int monthNumber;
    printf("Enter the number of the month: ");
    scanf("%d", &monthNumber);

    findNumberofDaysInMonth(monthNumber);

    return 0;
}

void findNumberofDaysInMonth(int n)
{
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        printf("number of days for this month are 31\n");
    }
    else if (n==4 || n==6 || n==9 || n==11)
    {
        printf("number of days for this month are 30\n");
    }
    else if(n==2)
    {
        printf("number of days for this month are 28\n");
    }
    else
    {
        printf("Invalid month");
    }

}