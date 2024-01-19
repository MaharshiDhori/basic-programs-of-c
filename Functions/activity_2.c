#include<stdio.h>
// Sorting program

void sortingArray(int a[8]);
int main()
{
    printf("Enter the elements of the array: ");
    int i;
    int a[8];
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    sortingArray(a);

    return 0;
}


void sortingArray(int a[8])
{
    int i;
    int j;
    int temp;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if(a[i]<a[j])   //Ascending order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
     for(i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
}