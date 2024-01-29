#include<stdio.h>

// Setting the upper triangle of a 2D array

int main()
{
    int arr[3][3];
    printf("Enter the elements: ");
    
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Setting a zero in upper triangular matrix: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(j<=2 && i<j)
            {
                arr[i][j] = 0;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}