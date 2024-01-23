#include<stdio.h>
int main()
{
    int n, freq=0;
    printf("Enter the number of element in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the number to find its frequency: ");
    scanf("%d", &key);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            freq++;
        }
    }

    printf("The frequency of the %d id %d", key, freq);
    

    return 0;
}