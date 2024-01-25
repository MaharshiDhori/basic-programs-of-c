#include<stdio.h>

// Insert new element and display it in ascending order

int main()
{
    int n;
    printf("Enter the number of the element: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int newElement;
    printf("enter the new element: ");
    scanf("%d", &newElement);

    // Find the position to insert the new element
    int pos = 0;
    while (pos < n && newElement > arr[pos])
    {
        pos++;
    }

    // Shift elements to make space for the new element
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = newElement;

    printf("\nAfter adding a new element: ");
    // Print the updated array
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}