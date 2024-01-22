#include<stdio.h>
float areaOfRectangle(float n, float m);
float areaOfSquare(float n);
float areaOfTriangle(float b, float h);
float areaOfCircle(float r);
void displayMenu();

int main()
{
    displayMenu();
    int choice;
    printf("Enter the choice (1-4): ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        float radius;
        printf("Enter the radius : ");
        scanf("%f", &radius);
        printf("The area of Circle is  : %f\n", areaOfCircle(radius));
    }
    else if(choice == 2)
    {
        float lenthOfRectangle;
        float widthOfRectangle;
        printf("Enter the length and width for the Rectangle: ");
        scanf("%f%f", &lenthOfRectangle, &widthOfRectangle);
        printf("The area of Rectangle is  : %f\n", areaOfRectangle(lenthOfRectangle, widthOfRectangle));
    }
    else if(choice == 3)
    {
        float base, height;
        printf("Enter the Value of Base and Height: ");
        scanf("%f%f", &base,&height);
        printf("The area of Square is  : %f\n", areaOfTriangle(base, height));
    }
    else if(choice == 4)
    {
        float side;
        printf("Enter the side of the Square: ");
        scanf("%f", &side);
        printf("The area of Square is  : %f\n", areaOfSquare(side));
    }
    else if(choice == 5)
    {
        printf("Exiting....");
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}

void displayMenu()
{
    printf("1.Circle\n");
    printf("2.Rectangle\n");
    printf("3.Triangle\n");
    printf("4.Square\n");
    printf("5.Exit\n");
}

float areaOfRectangle(float n, float m)
{
    return n*m;
}

float areaOfSquare(float n)
{
    return n*n;
}

float areaOfTriangle(float b, float h)
{
    return (b*h)/2;
}

float areaOfCircle(float r)
{
    return 3.14*r*r;
}

float areaOfEllips(float a, float b)
{
    return a*b*3.14;
}