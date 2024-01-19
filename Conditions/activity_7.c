#include<stdio.h>
int main()
{
    int height;
    printf("Enter the height of the person in centemeter: ");
    scanf("%d", &height);

    if(height>150 && height<170)
    {
        printf("You are eligible for the police physical test.");
    }
    else if(height>170 && height<190)
    {
        printf("You are eligible for the army physial test.");
    }
    else
    {
        printf("You are not eligible to join the armed forces.");
    }
    return 0;
}