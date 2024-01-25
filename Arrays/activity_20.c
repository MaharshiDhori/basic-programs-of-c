#include <stdio.h>

// Sorting array in descending order

void sortDesceding(int arr[], int n);

int main()
{
    int n;
    printf("Enter the number of the element: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array in sorted descending order: \n");
    sortDesceding(arr, n);

    return 0;
}

void sortDesceding(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i];
            if (arr[i] < arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        printf("%d ", arr[i]);
    }
}