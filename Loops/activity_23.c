#include <stdio.h>
int main()
{
    int num_1;
    int num_2;
    int hcf = 1;
    printf("Enter the two numbers: ");
    scanf("%d%d", &num_1, &num_2);

    int mini = (num_1 < num_2) ? num_1 : num_2;

    for (int i = 1; i <= mini; i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            hcf = i;
        }
    }
    
    printf("%d is a HCF", hcf);

    return 0;
}