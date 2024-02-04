#include <stdio.h>
void calulcateBill(float p);
int main()
{
    int id;
    printf("Enter your id: ");
    scanf("%d", &id);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter you units: ");
    float units;
    scanf("%f", &units);

    calulcateBill(units);

    return 0;
}

void calulcateBill(float p)
{

    float surcharge;
    // surcharge = p * 0.15;

    if (p <= 199)
    {
        float charge = p * 1.20;
        printf("Amount Charges per unit: %f\n", charge);
    }
    else if (p >= 200 && p < 400)
    {
        float charge = p * 1.50;
        printf("Amount Charges per unit: %f\n", charge);
    }
    else if (p >= 400 && p < 600)
    {
        float charge = p * 1.80;
        printf("Amount Charges per unit: %f\n", charge);

        surcharge = charge * 0.15;
        float totalAmount = charge + surcharge;
        printf("Surcharge Amount: %f\n", surcharge);
        printf("Net amount will be paid by customer: %f\n", totalAmount);
    }
    else if (p >= 600)
    {
        float charge = p * 2.00;
        printf("Amount Charges per unit: %f\n", charge);

        surcharge = charge * 0.15;
        float totalAmount = charge + surcharge;
        printf("Surcharge Amount: %f\n", surcharge);
        printf("Net amount will be paid by customer: %f\n", totalAmount);
    }
    else if (p <= 0)
    {
        printf("You bill amount is 100 Ruppees.");
    }

    else
    {
        printf("Invalid Input\n");
    }
}