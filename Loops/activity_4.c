#include<stdio.h>

int listOfSum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
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

    printf("Sum of elements of the list is: %d", listOfSum(arr, n));

    return 0;
}