#include<stdio.h>
#include<limits.h>

// Finding the smallest element in an array

int main()
{
    int arr[100], n, min = INT_MAX;
    
    printf("Enter the number of elements you want to insert into array: ");
    scanf("%d", &n);
        if (n > 100 || n <= 0) {
        printf("Invalid input! Please enter a number between 1 and 100.");
        return 0;
    }
        
    printf("\nInsert %d numbers:\n", n);
    for(int i=0; i < n; i++) {  
        scanf("%d", &arr[i]);
    }
      
    // Finding minimum element in array
    for(int j=0; j < n; j++) {
        if(arr[j] < min) {
            min = arr[j];
        }
    }
    
    printf("\nThe smallest element is %d.", min);
	return 0;
}