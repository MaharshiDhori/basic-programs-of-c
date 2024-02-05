#include<stdio.h>

// Finding the missing element in the array

int main()
{
    int max = 0;
    int n;
    printf("Enter the numner of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for(int i = 1; i <= max; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] == i)
            {
                found = 1;
                break;
            }
        }
        
        if(!found)
        {
            printf("The missing number is: %d\n", i);
            break;
        }
    }
    
    return 0;
}