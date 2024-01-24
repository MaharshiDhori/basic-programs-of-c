#include<stdio.h>

// Sum of N numbers

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Average of the elements: %f", sum/n);
    
    return 0;
}