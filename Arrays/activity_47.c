#include <stdio.h>

//Write a program to print next greater elements in a given unsorted
// array. Elements for which no greater element exists, consider the next
// greater element as -1.

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Given array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                printf("Next bigger element of %d is %d\n", arr[i], arr[j]);
                arr[i] = arr[j];
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("Next bigger element of %d is -1\n", arr[i]);
        }
    }

    printf("Modified array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}