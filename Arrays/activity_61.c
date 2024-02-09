#include <stdio.h>

// Finding the largest subarray of 0s and 1s

int findSubArray(int arr[], int n);
int main()
{
    int arr[] = {0, 1, 0, 0, 1, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    findSubArray(arr, n);

    return 0;
}

int findSubArray(int arr[], int n)
{
    int sum = 0;
    int max_size = -1, startIndex;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == 0)
        {
            sum = 1;
        }
        else
        {
            sum = -1;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == 0)
            {
                sum += 1;
            }
            else
            {
                sum += -1;
            }

            if (sum == 0 && max_size < j - i + 1)
            {
                max_size = j - i + 1;
                startIndex = i;
            }
        }
    }

    if (max_size == -1)
        printf("\nNo such subarray");
    else
        printf("\n%d to %d", startIndex, startIndex + max_size - 1);

    return max_size;
}