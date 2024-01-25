#include<stdio.h>

// Find odd and even element from the array

void isEvenElement(int arr[], int n);
void isOddElement(int arr[], int n);

int main()
{
    int n;
    printf("Enter the number of the element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    isOddElement(arr, n);
    isEvenElement(arr, n);
    return 0;
}

void isOddElement(int arr[], int n)
{
    int odd = arr[0];
    printf("The odd elements are: \n");
    for(int i = 0; i<n; i++)
    {
        odd = arr[i];
        if(odd%2!=0)
        {
            printf("%d ", odd);
        }
    }

    
}

void isEvenElement(int arr[], int n)
{
    int even = arr[0];
    printf("\nThe even elements are: \n");
    for(int i = 0; i<n; i++)
    {
        even = arr[i];
        if(even%2==0)
        {
            printf("%d ", even);
        }
    }

}