#include<stdio.h>

int main()
{
    int num_1;
    int num_2;
    
    printf("Enter the number 1 : ");
    scanf("%d", &num_1);
    printf("Enter the number 2: ");
    scanf("%d", &num_2);

    // if(num_1 == num_2)
    // {
    //     printf("Both numbers are equal.");
    // }
    // else
    // {
    //     printf("Both numbers are not equal.");
    // }

    // USED TERNARY OPERATOR TO MAKE THE CODE SMALLER

    num_1==num_2 ? printf("Both numbers are equal.") :  printf("Both numbers are not equal.");  

    return 0;
}