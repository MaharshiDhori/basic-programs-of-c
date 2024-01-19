#include <stdio.h>
void checkTemp(float n);
int main()
{
    float temp;
    printf("Enter the Temprature: ");
    scanf("%f", &temp);
    checkTemp(temp);

    return 0;
}

void checkTemp(float n)
{
    if (n < 0)
    {
        printf("Weather is freezing.\n");
    }
    else if (n >= 0 && n <= 10)
    {
        printf("Weather is very cold.\n");
    }
    else if (n > 10 && n <= 20)
    {
        printf("Weather is cold.\n");
    }
    else if (n > 20 && n <= 30)
    {
        printf("Weather is normal.\n");
    }
    else if (n > 30 && n <= 40)
    {
        printf("Weather is hot.\n");
    }
    else if (n > 40)
    {
        printf("Weather is very hot.\n");
    }
    else
    {
        printf("Temperature is out of range.\n");
    }
}
