#include<stdio.h>

// Setting the lower triangle of a 2D array

int main()
{
    int arr[3][3];
    printf("Enter the elements: ");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n Showing zero in lower triangular matrix: \n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if (i<=2 && j<i)
            {
                arr[i][j] = 0;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}