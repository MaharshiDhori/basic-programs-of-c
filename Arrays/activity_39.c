#include<stdio.h>
#include<limits.h>

// Largest / Maximum sum of the subarray

int main()
{
    int n;
    printf("Enter the number of the elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    int max_sum = INT_MIN;
    int curr_sum = 0;

    for(int i = 0; i<n; i++)
    {
        curr_sum = curr_sum + arr[i];

        if(curr_sum>max_sum)
        {
            max_sum = curr_sum;
        }
        if(curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    printf("\nlargest sum: %d", max_sum);

    return 0;
}