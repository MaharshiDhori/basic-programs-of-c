#include <stdio.h>

// Leap year with an array
// Displaying Month and Days parallely

int isLeap(int yr);
void monthsAndDays(int n);

int main()
{

    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    monthsAndDays(year);
    if (isLeap(year))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}


void monthsAndDays(int n)
{
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int LeapDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int NonLeapDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < 12; i++)
    {
        printf("%s\n", month[i]);

        if (isLeap(n))
        {
            printf("%d\n", LeapDays[i]);
        }
        else
        {
            printf("%d\n", NonLeapDays[i]);
        }
    }
}

int isLeap(int yr)
{
    if (yr % 4 == 0)
    {
        if (yr % 100 == 0)
        {
            if (yr % 400 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}