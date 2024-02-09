#include <stdio.h>

// Return the maximum sum such that no two elements are adjacent

int maxSum(int arr[], int n)
{
    int inclusive = arr[0];
    int exclusive = 0;
    int exclusive_new;
    int i;
    for (i = 1; i < n; i++)
    {
        exclusive_new = (inclusive > exclusive) ? inclusive : exclusive;
        inclusive = exclusive + arr[i];
        exclusive = exclusive_new;
    }
    if (inclusive > exclusive)
    {
        return inclusive;
    }
    else
    {
        return exclusive;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 9, 7, 10, 1, 10, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum sum such that no two elements are adjacent: %d", maxSum(arr, n));
    return 0;
}
