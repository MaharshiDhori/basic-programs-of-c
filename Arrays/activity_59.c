#include<stdio.h>

void moveZerosatEnd(int arr[], int n);

int main()
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosatEnd(arr, n);
    printf("\nThe modified array is:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


void moveZerosatEnd(int arr[], int n)
{
    int count = 0; // Correct initialization

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            arr[count++] = arr[i];
    }

    while (count < n) // Placing zeros at the end
        arr[count++] = 0;
}
