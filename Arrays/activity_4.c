#include<stdio.h>

int main()
{
    int n;
    printf("Enter the numer: ");
    scanf("%d", &n);

    int temp = n;

    int arr[n];
    printf("enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}