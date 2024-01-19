#include<stdio.h>
//Program for calculating the salary of the person based on hours and rate.
int main()
{
    float hours;
    printf("Enter the working hours : ");
    scanf("%f", &hours);
    float rate;
    printf("Enter the rate : ");
    scanf("%f", &rate);

    float salary =  hours * rate;
    float weeklySalary = salary*5; // 5 days working in a week
    float monthlySalary = weeklySalary*4; // 4 weeks per month
    float annualSalary = monthlySalary*12; // 12 months per year

    printf("Your weekly salary is : %f\n", weeklySalary);
    printf("Your monthly salary is : %f\n", monthlySalary);
    printf("Your yearly salary is : %f\n", annualSalary);

    return 0;
}