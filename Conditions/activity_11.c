#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;

    printf("Enter the value of a, b and c: \n");
    scanf("%f%f%f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d==0)
    {
        printf("Roots are real and equal.\n");
        r1 = -b/(2*a);
        r2 = -b/(2*a);

        printf("Root 1 is %f and Root 2 is %f", r1, r2);
    }
    else if(d>0)
    {
        printf("Roots are real and different.\n");
        r1 = (-b+sqrt(b)) / (2*a);
        r2 = (-b-sqrt(b)) / (2*a);

        printf("Root 1 is %f and Root 2 is %f", r1, r2);
    }
    else
    {
        printf("Roots are imaginary.\n");
    }
    
    return 0;
}