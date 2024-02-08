#include <stdio.h>

int main()
{
    int array[] = {1, 2, 2, 4, 5, 5, 5, 8, 9, 1};
    int array_size = sizeof(array) / sizeof(array[0]);
    int count = 0;

    for (int i = 0; i <= array_size; i++)
    {
        if (array[i] == array[i + 1])
        {
            count++;
        }
        
    }
    

    printf("%d", count);

    return 0;
}
