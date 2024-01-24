#include<stdio.h>

// Finding Duplicate elements in array

int main()
{
    int n, duplicate = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate++;
            }
        }
    }
    
    printf("Total number of duplicate elements found are : %d", duplicate);

    return 0;
    
}