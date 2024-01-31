#include<stdio.h>

// Rotate an array by N position

int main()
{
    int n;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in sorted order: ");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int position;
    printf("Enter the position: ");
    scanf("%d", &position);
    
    if(position >= 1 && position <= n)
    {
        printf("Before %d position the values of the array are: \n", position);
        for(int i = 0; i < position; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nAfter %dth position the values of the array are: \n", position);

    for(int i = position; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}