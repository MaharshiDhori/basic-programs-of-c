#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    // if(a>b)
    // {
    //     if(a>c)
    //     {
    //         printf("%d is the largest number.", a);
    //     }
    //     else
    //     {
    //         printf("%d is the largest number.", c);
    //     }
    // }
    // else
    // {
    //     if(b>c)
    //     {
    //         printf("%d is the largest nunber", b);
    //     }
    //     else
    //     {
    //         printf("%d is the largest number", c);
    //     }
    // }

    // USED TERNARY OPERATOR TO MAKE THE CODE SMALLER

    a>b ? (b>c ? printf("%d is the largest number.", a) : printf("%d is the largest number.", c))
    : (b>c ? printf("%d is the largest nunber", b) : printf("%d is the largest number", c));


    return 0;
}