#include<stdio.h>

// Find the unique elements in the array

int main() {
    int n;
    
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Given array is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    int unique_element[n];
    int unique_count = 0;
    
    printf("\nUnique elements in the array: \n");

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0; // Flag to check if the element is a duplicate
        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == unique_element[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique_element[unique_count++] = arr[i];
        }
    }
    
    // Printing the unique elements
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique_element[i]);
    }

    return 0;
}
