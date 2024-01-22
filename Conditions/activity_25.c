#include<stdio.h>

int calculation(int n, int m, int p);
void menu();

int main()
{
    int num1;
    int num2;
    int choice;
    int result;
    menu();
    printf("Enter the two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Enter the choice: ");
    scanf("%d", &choice);
    result = calculation(num1, num2, choice);
    printf("The result is : %d", result);
    return 0;
}


void menu()
{
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
}

int calculation(int n, int m, int p)
{
    switch(p)
    {
        case 1 :
            return n+m;
            break;
        case 2:
            return n-m;
            break;
        case 3:
            return n*m;
            break;
        case 4:
            return n/m;
            break;
        default:
            printf("Invalid choice.");
            break; 
    }

    return 0;
}