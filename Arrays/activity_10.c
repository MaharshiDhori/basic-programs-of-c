#include<stdio.h>

// Reverse an array

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in an Array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Displaying elements of the array in reverse: \n");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}