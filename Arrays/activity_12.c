#include<stdio.h>

// Copy elements from one array to another

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];
    printf("Enter the elements into the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("The elements stored in the first array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];

    }
    printf("The elements copied in the second array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    return 0;
};