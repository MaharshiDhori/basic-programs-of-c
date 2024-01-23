#include<stdio.h>

//Right side triangle

int main()
{
    int row;
    printf("Enter the row: ");
    scanf("%d", &row);

    for(int i=1; i<row; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf(" %d", j);
        }
        
        printf("\n");
    }
    return 0;
}