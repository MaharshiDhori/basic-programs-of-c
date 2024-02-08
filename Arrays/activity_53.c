#include <stdio.h>

// Program to find the sub array from the given index range.

int main()
{
    int n;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("given array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // int choice;
    int start, end;

    do
    {
        printf("\nEnter the start and end index of the sub array: ");
        scanf("%d %d", &start, &end);

        if(start < 0 || end > n)
        {
            printf("Invalid index range\n");
            continue;
        }

        for (int i = start; i <= end; i++)
        {
            if (i >= start && i <= end)
            {
                printf("%d ", arr[i]);
            }
        }

        printf("\nEnter -1 to exit");

    } while (start != -1 || end != -1);

    return 0;
}