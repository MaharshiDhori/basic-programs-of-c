#include<stdio.h>

//Missing smallest number from a given array

int main()
{
    int n;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
    printf("Missing smallest element in the array is: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != i+1)
        {
            printf("%d", i+1);
            break;
        }
    }
    
    return 0;
}