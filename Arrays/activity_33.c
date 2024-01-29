#include <stdio.h>

// Checking weather a matrix is an identity matrix or not

int main()
{
    int p = 0, q = 0;
    int count = 0;
    printf("Enter the value of rows and columns: ");
    scanf("%d%d", &p, &q);

    int arr[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                count--;
                break;   
            }
            else if(i != j && arr[i][j] != 0)
            {
                count--;
                break;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    if (count==0)
    {
        printf("It is an identity matrix\n");
    }
    else
    {
        printf("It is not an identity matrix");
    }

    return 0;
}
