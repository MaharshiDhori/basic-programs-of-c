#include<stdio.h>

    // Displaying the 2D array

int main()
{
    int arr[3][3];
    printf("Enter the elements: ");
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0; i<3;i++)
    {
        printf("\n");

        for(int j = 0; j<3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }

    return 0;
}