#include <stdio.h>

// Sum of each row and column of a 2D array

int main() {
    int arr[3][3]; // You can adjust the size of the array as needed

    printf("Enter the elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of each row
    printf("\nSum of each row:\n");
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }

    // Calculate the sum of each column
    printf("\nSum of each column:\n");
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }

    return 0;
}