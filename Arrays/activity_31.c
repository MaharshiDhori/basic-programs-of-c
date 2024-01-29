#include<stdio.h>

// Cheking weather a matrix is sparse or not

int main()
{
    int arr[3][3];
    int count = 0;
    printf("Enter the elements:");

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i  = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("%d ", arr[i][j]);
            if(arr[i][j] == 0)
            {
                count++;
            }
        }
        printf("\n");
    }

    if(count >= 3)
    {
        printf("It is a sparse matrix");
    }
    else
    {
        printf("It is not a sparse matrix");
    }

    return 0;
}