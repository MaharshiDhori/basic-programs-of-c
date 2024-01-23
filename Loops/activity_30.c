#include<stdio.h>

// Harmonic series and sum

int main()
{
    int n;
    float k = 1;    
    float sum = 0.0;
    printf("Enter the terms: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {   
        if(i<n)
        {
            printf("1/%d + ", i);
            sum = sum + k/(float)i;
        }
        if (i==n)
        {
            printf("1/%d + ", i);
            sum = sum + k/(float)i;
        }
    }

    printf("\nSum of Series upto %d terms : %f \n", n, sum);

    return 0;
}