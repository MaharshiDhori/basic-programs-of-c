#include <stdio.h>

// Find the majority element in an array

int main()
{
    int n;
    int count = 0;
    int max = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                max = arr[j];
            }
        }

        printf("%d ", arr[i]);
    }

    if (count > n / 2)
    {
        printf("\nMajority element is %d", max);
    }
    else
    {
        printf("\nNo majority element");
    }

    return 0;
}