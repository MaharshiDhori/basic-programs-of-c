#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX_LENGTH 100

void formatName(char input[MAX_LENGTH], FILE *outputFile)
{
    char name[MAX_LENGTH];
    int score;

    if(sscanf(input, "%s %d", name, &score) != 2)
    {
        fprintf(outputFile, "Error: Invalid input format. Please enter both the first name and score.\n");
        return;
    }
    
    name[0] = toupper(name[0]);
    fprintf(outputFile, "%c, %d.\n", name[0], score);
}

void calculateStatistics(FILE *inputFile)
{
    int scores[MAX_LENGTH];
    int numScores = 0;
    int totalScore = 0;
    int highScore = -1;
    int lowScore = -1;

    char line[MAX_LENGTH];

    while (fgets(line, sizeof(line), inputFile) != NULL)
    {
        int score;
        if (sscanf(line, "%*c, %d", &score) == 1)
        {
            // Successfully parsed a score
            scores[numScores++] = score;

            // Update total score
            totalScore += score;

            // Update high and low scores
            if (highScore == -1 || score > highScore)
                highScore = score;
            if (lowScore == -1 || score < lowScore)
                lowScore = score;
        }
    }

    if (numScores > 0)
    {
        // Calculate and display statistics
        double averageScore = (double)totalScore / numScores;

        printf("Scores:\n");
        for (int i = 0; i < numScores; i++)
        {
            printf("%d ", scores[i]);
        }

        printf("\n\nStatistics:\n");
        printf("High Score: %d\n", highScore);
        printf("Low Score: %d\n", lowScore);
        printf("Average Score: %.2lf\n", averageScore);
    }
    else
    {
        printf("No valid scores found in the file.\n");
    }
}

int main()
{
    char userInput[MAX_LENGTH];
    FILE *outputFile, *inputFile;

    // Open a file for writing
    outputFile = fopen("score.txt", "w");
    if(outputFile == NULL)
    {
        printf("Error: Unable to open the file for writing.\n");
        return 1;
    }

    while (1)
    {
        printf("Enter a first name and Score (or type 'exit' to stop): ");
        fgets(userInput, sizeof(userInput), stdin);

        userInput[strcspn(userInput, "\n")] = '\0';

        // Check if the user wants to exit
        if (strcmp(userInput, "exit") == 0)
            break;

        // Call the function to format and write to the file
        formatName(userInput, outputFile);
    }

    // Close the output file
    fclose(outputFile);

    // Open the file for reading
    inputFile = fopen("score.txt", "r");
    if(inputFile == NULL)
    {
        printf("Error: Unable to open the file for reading.\n");
        return 1;
    }

    // Call the function to calculate and display statistics
    calculateStatistics(inputFile);

    // Close the input file
    fclose(inputFile);

    return 0;
}