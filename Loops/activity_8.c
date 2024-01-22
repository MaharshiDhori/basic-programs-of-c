#include<stdio.h>

int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], sum=0;
    printf("enter the elements of the list: ");

    for(int i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("the sum of the elements of the array is: %d \n", sum);

    int avg;
    avg = sum/n;
    printf("the average of the sum is : %d \n", avg);


    return 0;
}
