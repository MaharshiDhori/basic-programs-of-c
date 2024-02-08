#include<stdio.h>

// Finding the number of triangles that can be formed with the given array

int main()
{
    int n;
    int times = 0;
    int sum = 0;
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

    for (int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            sum = arr[i] + arr[j];

            if (sum > arr[j+1])
            {
                times++;
            }
        }
    }
    
    printf("Triangle can be made %d times\n", times);
    
    return 0;
}