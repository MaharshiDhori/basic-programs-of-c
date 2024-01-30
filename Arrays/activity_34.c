#include<stdio.h>

// check pair of elements whose sum is equal to given number

int chkPair(int arr[], int size, int x);

int main()
{
    int arr[] = { 0, -1, 2, -3, 1 };
    int sum = -2;
    int size = sizeof(arr) / sizeof(arr[0]);

   if (chkPair(arr, size, sum)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
    return 0;
}

int chkPair(int arr[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (arr[i] + arr[j] == x) {
                return 1;
            }
        }
    }
 
    return 0;
}