#include<stdio.h>

// Finding the maximum and minimum element in the array

void isMax(int arr[], int n);
void isMin(int arr[], int n);

int main()
{
    int n;
    printf("Enter the number of the element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    isMax(arr, n);
    isMin(arr, n);
    return 0;
}

void isMax(int arr[], int n)
{
    int max = arr[0];
    int sc = arr[0];
    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Maximum element: %d\n", max);

}

void isMin(int arr[], int n)
{
    int min = arr[0];
    for(int i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    printf("Minimum element: %d\n", min);

}