#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);


    int month = age*12;
    int days = age*365;
    int hours = days*24;
    int minutes = hours*60;
    int seconds = minutes * 60;

    printf("You are %d month, %d days, %d hours, %d minutes, %d seconds old.", month, days, hours, minutes, seconds);
    

    return 0;
}