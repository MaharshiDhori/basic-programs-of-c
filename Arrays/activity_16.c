#include <stdio.h>

// Counting each element of the array

int main()
{
    int n;
    int count = 1;
    int temp = 0;
    printf("Enter the number of the elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        count = 1;   //Reseting the count for each new element

        while (i<n-1 && temp==arr[i+1])
        {
            count++;
            i++;
        }

        printf("%d occurs %d times\n", temp, count);
        
    }
    return 0;
}