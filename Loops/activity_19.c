#include <stdio.h>
void starDiamond();
void numberDiamond();
void charDiamond();

int main()
{
    starDiamond();
    printf("\n");
    numberDiamond();
    printf("\n");
    charDiamond();
    
    return 0;
}

void starDiamond()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = row-1; i >= 1; i--)
    {
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}

void numberDiamond()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    for (int i = row-1; i >= 1; i--)
    {
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}

void charDiamond()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", j+64);
        }

        printf("\n");
    }

    for (int i = row-1; i >= 1; i--)
    {
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", j+64);
        }

        printf("\n");
    }
}