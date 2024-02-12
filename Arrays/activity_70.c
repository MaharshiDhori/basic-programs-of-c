#include <stdio.h>

//

int main() {
    int matrix[3][3];
    int sum = 0;

    
    printf("Input elements in matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            sum += matrix[i][j];
        }
    }

    
    printf("Sum of lower triangular matrix = %d\n", sum);

    return 0;
}