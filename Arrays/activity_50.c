#include<stdio.h>

// If a given integer x is present multiple times in the array, 
// then print the number of times it is repeated.

int main()
{
    int n;
    int times = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Given array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    int x;
    printf("Element to search: ");
    scanf("%d", &x);

    int temp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            temp = arr[i];
            times++;
        }
    }

    printf("The value %d is repeated %d times\n", temp, times);
    
    return 0;
}