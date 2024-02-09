#include<stdio.h>

int findMaxOnesRow(int row, int col, int arr[row][col]);

int main()
{
    int row;
    printf("Enter the number of rows : ");
    scanf("%d", &row);

    int col;
    printf("Enter the number of columns : ");
    scanf("%d", &col);

    int matrix[row][col];
    int j;
    printf("Enter only 0s and 1s to the array : ");
    for(int i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Given array: \n");
    for(int i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int maxOnesRowIndex = findMaxOnesRow(row, col, matrix);

    printf("The index of row with maximum 1s is: %d", maxOnesRowIndex);
    
    return 0;
}

int findMaxOnesRow(int row, int col, int arr[row][col])
{
    int maxOnesCount = 0;
    int maxOnesRowIndex = 0;

    for(int i = 0; i < row; i++)
    {
        int onesCount = 0;

        for(int j = 0; j < col; j++)
        {
            if (arr[i][j] == 1)
            {
                onesCount++;
            }
        }

        if (onesCount > maxOnesCount)
        {
            maxOnesCount = onesCount;
            maxOnesRowIndex = i;
        }
    }

    return maxOnesRowIndex;
}
