#include <stdio.h>

// Comparing two metrices if they are equal or not

int main()
{
    int p = 0, q = 0;
    printf("Enter the number of first rows and columns: ");
    scanf("%d %d", &p, &q);

    int arr[p][q];
    printf("Enter the elements of the first metrice: ");
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
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int a = 0, s = 0;
    printf("Enter the number of the second rows and columns:");
    scanf("%d %d", &a, &s);

    if (p != a || q != s)
    {
        printf("Both metrices have different dimenensions so they are not equal.");
        return 0;
    }

    int arr2[a][s];
    printf("Enter the elements of the second metrice: ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    int metricesEquals = 1;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if (arr[i][j] != arr2[i][j])
            {
                metricesEquals = 0;
                break;
            }
        }
        if (!metricesEquals)
        {
            break;
        }
    }

    if (metricesEquals)
    {
        printf("Both metrices are equal");
    }
    else
    {
        printf("Both metrices are not equal");
    }

    return 0;
}