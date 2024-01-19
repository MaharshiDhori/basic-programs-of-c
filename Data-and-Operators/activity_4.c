#include<stdio.h>

float areaOfRectangle(float n, float m);
float areaOfSquare(float n);
float areaOfTriangle(float b, float h);
float areaOfCircle(float r);
float areaOfEllips(float a, float b);

int main()
{
    float lenthOfRectangle;
    float widthOfRectangle;
    printf("Enter the length and width for the Rectangle: ");
    scanf("%f%f", &lenthOfRectangle,&widthOfRectangle);
    printf("The area of Rectangle is  : %f\n", areaOfRectangle(lenthOfRectangle, widthOfRectangle));

    float side;
    printf("Enter the side of the Square: ");
    scanf("%f", &side);
    printf("The area of Square is  : %f\n", areaOfSquare(side));

    float base, height;
    printf("Enter the Value of Base and Height: ");
    scanf("%f%f", &base,&height);
    printf("The area of Square is  : %f\n", areaOfTriangle(base, height));

    float radius;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    printf("The area of Circle is  : %f\n", areaOfCircle(radius));

    float a,b;
    printf("Enter the value of Major axis and Minor axis: ");
    scanf("%f%f", &a,&b);
    printf("The area of Ellips is  : %f\n", areaOfEllips(a,b));


    return 0;
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