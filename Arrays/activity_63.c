#include <stdio.h>

// Find the median of the 2 sorted arrays

int main()
{
    int arr1[] = {1, 5, 13, 24, 35};
    int arr2[] = {3, 8, 15, 17, 32};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }

    int median;
    if ((n + m) % 2 == 0)
    {
        median = (arr3[(n + m) / 2] + arr3[(n + m) / 2 - 1]) / 2;
    }
    else
    {
        median = arr3[(n + m) / 2];
    }

    printf("Median of the 2 sorted arrays: %d", median);
    return 0;
}