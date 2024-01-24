#include <stdio.h>

// Finding unique element in array

int main()
{
    int n, ctr = 0;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ctr = 0; // set to 0 for every element

        for (int j = 0; j < n + 1; j++)
        {
            /* Increment the counter when the search value is duplicate. */

            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    ctr++;
                }
            }
        }

        if (ctr == 0)
        {
            printf("The unique element is: %d\n", arr[i]);  // Print the unique element
        }
    }

    return 0;
}