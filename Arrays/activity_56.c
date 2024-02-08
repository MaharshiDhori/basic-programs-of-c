#include <stdio.h>

// Check if the array is the subarray of another array

int main()
{
    int n1;
    printf("Enter the number of the elemenet of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for(int i = 0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    int n2;
    printf("Enter the number of the elemenet of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for(int i = 0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int match = 1;
    for(int i = 0; i <n2; i++)
    {
        int found = 0;
        for(int j = 0; j<n1; j++)
        {
            if(arr2[i] == arr1[i])
            {
                found = 1;
                break;
            }
        }

        if(!found)
        {
            match = 0;
            break;
        }
    }

    printf("\n");

    if(match)
    {
        printf("The array is not the subarray  of another array.\n");
    }
    else
    {
        printf("The array is the subarray of another array.\n");
    }

    return 0;
}