#include <stdio.h>
// LCM of two Numbers
int main()
{
    int num_1;
    int num_2;
    printf("Enter the two numbers: ");
    scanf("%d%d", &num_1, &num_2);

    for (int i = 1; i < num_1*num_2; i++)
    {
        if (i % num_1 == 0 && i % num_2 == 0)
        {
            printf("%d is a LCM", i);
        }
    }

    return 0;
}
