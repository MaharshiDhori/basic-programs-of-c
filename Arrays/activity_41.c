#include<stdio.h>

// Find the pivot element in the sorted and rotated array

int main()
{   
    int n, temp = 0;
    printf("enter the elementas: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elemtns: ");

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[i] && arr[i + 1 % n] > arr[j])
            {
                temp = arr[j];
                break;
            }
        }
    }

    if(temp != -1)
    {
        printf("Pivot element: %d", temp);
    }
    else
    {
        printf("No pivot element");
    }

    return 0;
}