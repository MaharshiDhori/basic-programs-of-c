#include<stdio.h>

// Finding Minimum , Maximum and Average score from the array

void minScore(int arr[], int n);
void avgScore(int arr[], int n);
void maxScore(int arr[], int n);

int main()
{
    int terms;
    printf("Enter the number of elements: ");
    scanf("%d", &terms);

    int score[terms];
    printf("Enter the scores: ");
    for(int i=0; i<terms; i++)
    {
        scanf("%d", &score[i]);
    }
    minScore(score, terms);
    maxScore(score, terms);
    avgScore(score, terms);
    return 0;
}

void minScore(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i <= n; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }

    printf("Minimum score is : %d\n", min);
    
}

void maxScore(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    printf("Maximum score is : %d\n", max);
}

void avgScore(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++) 
    {
        sum+=arr[i];
    }

    printf("Average score is : %d\n", sum/n);
}