#include<stdio.h>

//Replace every element with the greatest element on right side

int main()
{
    int arr[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int max_from_right = arr[n - 1];
    arr[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = max_from_right;
        if (max_from_right < temp)
        {
            max_from_right = temp;
        }
    }

    printf("\nArray after replacing: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}