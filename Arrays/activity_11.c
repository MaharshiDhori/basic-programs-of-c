#include<stdio.h>

// Sum of all elements of an array

int main()
{
    int n;
    printf("Enter the number of the elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of all the elements: %d", sum);
    
    
    return 0;
}