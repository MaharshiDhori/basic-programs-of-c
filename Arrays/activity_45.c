#include<stdio.h>

//Find the duplicate elements in an array

int main()
{
    int arr[7] = {2, 7, 4, 7, 8, 3, 4};
    int n = 7;
    printf("Given array is \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("\n%d ", arr[i]);
            }
        }
    }
    return 0;
}