#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of the elemenet: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter only 0s, 1s and 2s to the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] < 0 || arr[i] > 2)
        {
            printf("Invalid input\n");
            return 0;
        }
    }

    printf("Given array: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\nSorted array in ascending order: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}