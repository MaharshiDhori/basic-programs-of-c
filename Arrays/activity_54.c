#include <stdio.h>

// Program to find the majority element of the given array.

int main()
{
    int n;
    int count = 0;
    int major = 0;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Given array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                if(count == n / 2)
                {
                    major = arr[i];
                    break;
                }
            }
        }
    }

    printf("\nMajority element of the array  : %d", major);
    
    return 0;
}