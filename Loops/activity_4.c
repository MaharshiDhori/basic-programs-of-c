#include<stdio.h>

// Sum of given list

int sumOfList(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];   // sum = sum + arr[i] (element of array)
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number of elemets: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of elements of the list is: %d", sumOfList(arr, n));

    return 0;
}