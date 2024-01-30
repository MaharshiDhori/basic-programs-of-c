#include <stdio.h>

//Missing number from a given array

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i = 0; i<n; i++)
    {
        if(arr[i] != i+1)
        {
            printf("Missing number is %d", i+1);
            break;
        }
    }
    
    return 0;
}