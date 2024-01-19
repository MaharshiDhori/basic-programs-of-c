#include <stdio.h>
void convertmiletoyard(int n);
void convertmiletokm(int n);
int main()
{
    int miles;
    printf("Enter the miles: ");
    scanf("%d", &miles);

    printf("The calculation of Miles to yards, inches and feet are below: \n");
    convertmiletoyard(miles);

    printf("The calculation of Miles to Kilometer, Meter and centemeter are below: \n");
    convertmiletokm(miles);

    return 0;
}

void convertmiletoyard(int n)
{
    int yards = n*1760;
    int feet = yards*3;
    int inches = feet*12;

    printf("The distance in yards is : %d\n", yards);
    printf("The distance in feet is : %d\n", feet);
    printf("The distance in inches is : %d\n", inches);
}

void convertmiletokm(int n)
{
    float kilometers = n*1.6;
    float meter = kilometers*1000;
    float centimeter = meter*100;
    
    printf("The distance in kilometers is : %f\n", kilometers);
    printf("The distance in meters is : %f\n", meter);
    printf("The distance in centimeters is : %f\n", centimeter);

}