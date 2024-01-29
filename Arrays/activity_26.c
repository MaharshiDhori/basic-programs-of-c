#include <stdio.h>
int main()
{
    int arr[3][3];
    int arr2[3][3];

    printf("Enter the elements of the first array:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[j][i] = arr[i][j];
        }
    }

    printf("Transpose of the the 2D arrays:");
    for(int i = 0; i<3; i++)
    {
        printf("\n");
        for(int j = 0; j<3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
    }

    return 0;
}