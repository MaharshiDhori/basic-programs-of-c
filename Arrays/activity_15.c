#include<stdio.h>

// Merging two array with descending order

int main()
{
    int p, q;
    int i, j, k;
    printf("\n----------First array-------------\n");
    printf("Enter the number of the elements: ");
    scanf("%d", &p);
    int arr1[p];
    printf("Enter the elements in first array: ");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("The first array is: ");
    for (i = 0; i < p; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n----------Second array-------------\n");

    printf("Enter the number of the elements: ");
    scanf("%d", &q);
    int arr2[q];
    printf("Enter the elements in second array: ");
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int r = p + q;
    int mergedArray[r];

    for (i = 0; i < p; i++)
    {
        mergedArray[i] = arr1[i];
    }
    i = p;
    for (j = 0; j < q; j++)
    {
        mergedArray[i] = arr2[j];
        i++;
    }

    for (i = 0; i < r; i++)
    {
        for ( k = 0; k < r-1; k++)
        {
            if (mergedArray[k]<mergedArray[k+1])
            {
                j = mergedArray[k+1];
                mergedArray[k+1] = mergedArray[k];
                mergedArray[k] = j;
            }
            
        }
        
    }

    printf("The merged array is: ");
    for (i = 0; i < r; i++)
    {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}