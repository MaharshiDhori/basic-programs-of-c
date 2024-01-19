#include<stdio.h>

float convertAreaFromFeetToYard(float n, float m);

int main()
{
    float lenthOfRectangle;
    float widthOfRectangle;
    float price;
    printf("Enter the price for covering floor : ");
    scanf("%f", &price);
    printf("Enter the length and width for the Room: ");
    scanf("%f%f", &lenthOfRectangle,&widthOfRectangle);
    printf("The area of Room in yard is  : %f\n", convertAreaFromFeetToYard(lenthOfRectangle, widthOfRectangle));
    printf("The cost of covering floor is : %f\n", convertAreaFromFeetToYard(lenthOfRectangle, widthOfRectangle)*price);
    return 0;
}

float convertAreaFromFeetToYard(float n, float m)
{
    return n*m/9;
}