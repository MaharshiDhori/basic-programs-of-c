#include<stdio.h>
int main()
{
    int row, k=1;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for(int i = 1; i<row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}