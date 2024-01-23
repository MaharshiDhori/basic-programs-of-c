#include<stdio.h>

// Numbers and cubes

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        printf("Number is: %d and cube is: %d\n", i, i*i*i);
    }
    
    return 0;
}