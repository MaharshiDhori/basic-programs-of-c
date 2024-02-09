#include<stdio.h>

//Find the minimum element in a sorted and rotated array
int findMin(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == arr[high])
        {
            high--;
        }
        else if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return arr[high];
}

int main()
{
    int arr[] = {3, 4, 5, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The minimum element is %d", findMin(arr, n));
    return 0;
}