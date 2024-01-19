#include<stdio.h>
void checkTriangleShape(float a, float b, float c);

int main()
{
    float side_1, side_2, side_3;
    printf("Enter the value of three sides : \n");
    scanf("%f%f%f", &side_1, &side_2, &side_3);
    
    checkTriangleShape(side_1, side_2, side_3);

    return 0;
}

void checkTriangleShape(float a, float b, float c)
{
    if(a==b && b==c)
    {
        printf("Triangle is equilateral");
    }
    else if (a==b || b==c)
    {
        printf("Triangle is isosceles");
    }
    else
    {
        printf("Triangle is scalene");
    }
}