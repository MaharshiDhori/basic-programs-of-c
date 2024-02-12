#include <stdio.h>

// Elements that are appeared odd times in an array 

int main()
{
    int n;
    printf("Enter the number of numns : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Given arrays is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nElements that appear odd number of times are: ");
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int printed = 0; 
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            for (int k = 0; k < i; k++)
            {
                if (arr[i] == arr[k])
                {
                    printed = 1;
                    break;
                }
            }
            if (!printed)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}