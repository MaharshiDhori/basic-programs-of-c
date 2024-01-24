#include <stdio.h>


// Count the number of odd and even elements in the given list

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], odd = 0, even = 0;
    printf("Enter the elements of the list: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    // Printing the element which is only odd in the array
    printf("The odd element in the array are: %d and The Even element in the array are: %d", odd, even);
    return 0;
}