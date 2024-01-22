#include <stdio.h>

int main()
{
    int count;
    printf("Enter the number of scores: ");
    scanf("%d", &count);

    int i = 0;  //Initializing the variable with value 0;
    int score;   
    int sum = 0;
    while (i < count)
    {
        printf("Enter the score: ");
        scanf("%d", &score);
        sum += score;
        i++;
    }

    int avg;
    if (count!=0)
    {
        int avg = sum / count;
        printf("Average score: %d", avg);
    }
    else
    {
        printf("Error: No scores were entered.\n");
    }
    
    return 0;
}