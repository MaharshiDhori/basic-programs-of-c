#include <stdio.h>

// A program to find the sum of upper triangular elements of the matrix.

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Given Array: \n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {  
            sum += arr[i][j];
        }
    }

    printf("Sum of upper triangular elements: %d\n", sum);

    return 0;
}
