#include <stdio.h>

// Addition of the two 2D arrays

int main()
{
    int arr2[2][2];
    int arr[2][2];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the elements of the second array: ");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i<2; i++)
    {
        printf("\n");
        for(int j = 0; j<2; j++)
        {
            printf("%d\t", arr[i][j] + arr2[i][j]);
        }
    }

    return 0;

}