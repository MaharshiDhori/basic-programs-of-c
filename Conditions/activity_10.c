#include<stdio.h>
int main()
{
    int mathsMark;
    int chemMarks;
    int phyMarks;

    printf("Check the eligibility: \n");
    printf("Enter the marks of Maths: \n");
    scanf("%d", &mathsMark);
    
    printf("Enter the marks of Physics: \n");
    scanf("%d", &phyMarks);

    printf("Enter the marks of Chemistry: \n");
    scanf("%d",&chemMarks);

    int totalMarks = mathsMark + chemMarks + phyMarks;
    int mathAndPhy = mathsMark + phyMarks;

    if(totalMarks >= 190)
    {
        if (mathAndPhy>=140)
        {
            if(mathsMark>=65 && phyMarks>=55 && chemMarks>=50)
            {
                printf("You are eligible to get an addmision.\n");
            }
            else
            {
                printf("You can not get the addmission as you have less marks in one of the three subject.");
            }
        }
        else
        {
            printf("You can not get addmisson as you have less than 140 marks in total of maths and physics subject.");
        } 
    }
    else
    {
        printf("You can not get addmision as you have less than 190 marks of total three subjects.");
    }

    return 0;
}