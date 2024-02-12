#include<stdio.h>

// A program to count the number of inversion in a given arrays.
#include<stdio.h>

int countInversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
                printf("Inversion: (%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return count;
}


int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Number of Inversions: %d\n", countInversions(arr, n));
    return 0;
}