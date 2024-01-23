#include<stdio.h>


int main()
{
    int row;
    printf("Enter the number: ");
    scanf("%d", &row);

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i+j)%2==1)  //check if i+j is even or odd
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}