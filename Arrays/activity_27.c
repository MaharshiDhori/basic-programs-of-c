#include<stdio.h>

// Sum of the left diagonal of a 2D array

int main()
{
    int arr[2][2];
    printf("Enter the elements: ");
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition of the left diagonal: ");
    int sum = 0;
    for(int  i=0; i<2; i++)
    {
        sum += arr[i][i];
        printf("%d ", sum);
        
    }

    return 0;
}