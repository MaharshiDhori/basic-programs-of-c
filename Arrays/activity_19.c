#include <stdio.h>

// Sorting array in acsending order

void sortAscending(int arr[], int n);

int main()
{
    int n;
    printf("Enter the number of the element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elememts of the array sorted in ascending order: \n");
    sortAscending(arr, n);

    return 0;
}

void sortAscending(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i];

            if (arr[j] < arr[i])
            {
                arr[i] = arr[j], arr[j] = temp;
            }
        }

        printf("%d ", arr[i]);
    }
}