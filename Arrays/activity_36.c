#include <stdio.h>

// Find the element that appears odd number of times in an array

int main()
{
    int n;
    printf("Enter the number of the elements :");
    scanf("%d", &n);

    int arr[n];
    int count = 0;
    int oddElement = 0;

    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count % 2 != 0)
            {
                oddElement = arr[i];
            }
        }
    }

    printf("\nThe element odd number of times is : %d\n", oddElement);

    return 0;
}