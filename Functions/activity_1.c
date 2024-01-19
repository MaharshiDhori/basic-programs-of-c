#include<stdio.h>
//Swapping the number without using the third variable
void AddSubsMethod(float a, float b);
void MulDivMethod(float a, float b);
int main()
{
    float Num_1;
    float Num_2;

    printf("Enter the first number: ");
    scanf("%f", &Num_1);
    printf("Enter the second number: ");
    scanf("%f" , &Num_2);

    printf("Before Swapping: a = %f, b = %f\n", Num_1, Num_2);
    AddSubsMethod(Num_1, Num_2);
    MulDivMethod(Num_1, Num_2);
    return 0;
}


void AddSubsMethod(float a, float b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping with Addition-Substraction method: a = %f, b = %f\n", a, b);
}

void MulDivMethod(float a, float b)
{
    a = a * b;
    b = a / b;
    a = a / b;
    printf("After Swapping with the Multiplication and Division method: a = %f, b = %f\n", a, b);
}