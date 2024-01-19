#include<stdio.h>
void triangleCheck(int a, int b, int c);

int main()
{
    int angle_1, angle_2, angle_3;
    printf("Enter the value of three angles : \n");
    scanf("%d%d%d", &angle_1, &angle_2, &angle_3);

    triangleCheck(angle_1, angle_2, angle_3);

    return 0;
}

void triangleCheck(int a, int b, int c)
{
    if (a+b+c == 180)
    {
        printf("The triangle can be formed.\n");
    }
    else
    {
        printf("The triangle cannot be formed.\n");
    }
    
}