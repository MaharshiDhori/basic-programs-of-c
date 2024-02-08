#include<stdio.h>

// closest pair of elements whose sum is minimum in an array.

int main()
{
    int sum_1  = 0;
    int sum_2 = 0;
    int n;
    printf("Enter the numner of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            sum_1 = arr[i] + arr[j];
            sum_2 = arr[j] + arr[i];
            if (sum_1 < sum_2)
            {
                sum_2 = sum_1;
            }
        }
    }
    printf("The Pair of elements whose sum is minimum are: %d\n", sum_2);
    
    
    return 0;
}