#include<stdio.h>

//Binary search 

int binarySearch(int arr[], int x, int low, int high);

int main()
{
    int n;
    printf("Enter the number of the elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elementsL ");

    for(int i =0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    printf("The elements is at this index: %d\n", binarySearch(arr, x, 0, n-1));

    return 0;
}


int binarySearch(int arr[], int x, int low, int high)
{   
    while(low <= high)
    {
        int mid = (low + high)/2;

        if(arr[mid] == x)
        {
            return mid;
        }
        if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}