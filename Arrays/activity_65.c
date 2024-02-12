#include<stdio.h>

// Write a program to search an element in a 2D array and display the position of the element.


int main()
{
    int element = 0;
    int row; 
    printf("Enter the number of rows : ");
    scanf("%d", &row);

    int col; 
    printf("Enter the number of columns : ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Enter the elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    printf("Given arrays is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }

    printf("\nGiven value for the search: ");
    scanf("%d", &element);

    // printf("\nThe element Found at the position in the matrix is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (element == arr[i][j])
            {
                printf("\nThe element Found at the position in the matrix is: %d, %d", i, j);
            }
            
        }
        
    }
    
    return 0;
}