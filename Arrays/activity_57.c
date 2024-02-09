#include <stdio.h>

// Minimum jumps to reach end of array

int minJumps(int arr[], int n)
{
    int jumps = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            return -1;
        }
        i = i + arr[i];
        jumps++;
    }
    return jumps;
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum number of jumps to reach end is %d", minJumps(arr, n));
    return 0;
}
