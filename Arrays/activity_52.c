#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array in acending order: ");
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

    for(int i=0; i <=10; i++)
    {
        for(int j = 0; j <= n; j++) {
            if (arr[j] == i) {
                printf("Number: %d ceiling is: %d floor is: %d\n", arr[j], arr[j], arr[j]);
            }
        }
        if(i==10)
        {
            printf("Number: %d ceiling is: %d floor is: %d\n", i, -1, i-1);
        }
        else
        {
            printf("Number: %d ceiling is: %d floor is: %d\n", i, i+1, i-1);
        }
    }

    return 0;
}