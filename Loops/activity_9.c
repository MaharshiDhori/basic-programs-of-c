#include <stdio.h>

// Pyramid pattern

int main()
{
    int rows;
    printf("Enter the number to generate row: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("%d ", i);
        }
        printf("\n");

    }

    return 0;
}