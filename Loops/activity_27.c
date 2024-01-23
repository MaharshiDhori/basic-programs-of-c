#include<stdio.h>

// GP Series

float sumOfSeries(float a, float b, float c);

int main()
{
    int firstNum;
    printf("Enter the first number: ");
    scanf("%d", &firstNum);
    
    int nthTerms;
    printf("Enter the nth term: ");
    scanf("%d", &nthTerms);
    
    int commonRatio;
    printf("Enter the common ratio: ");
    scanf("%d", &commonRatio);

    float result = sumOfSeries(firstNum, nthTerms, commonRatio);
    printf("Sum of Series: %f", result);
    return 0;
}


float sumOfSeries(float a, float b, float c)
{
    float sum = 0;

    for(int i=1; i<=b; i++)
    {
        sum = sum + a;
        printf("%f \n", sum);
        a = a*c;
    }

    return sum;
    
}