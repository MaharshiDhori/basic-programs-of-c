#include <stdio.h>
// Swap the first and last digit
int main()
{
    int number, temp, firstDigit, lastDigit, remainder, c, swap, d;

    printf("Enter the number: ");
    scanf("%d", &number);

    temp = number;
    lastDigit = number%10;
    remainder = 0; // initialize remainder to 0

    while (number > 9)
    {
        number /= 10;
    }

    firstDigit = number;
    number = temp / 10;

    while(number>10)
    {
       c = number%10;
       remainder = remainder*10 + c;  
       number = number/10;
        
    }

    swap = lastDigit;
    
    while (remainder>0)
    {
        d=remainder%10;
        swap = swap*10+d;
        remainder = remainder/10;

    }

    swap = swap*10+firstDigit;
    printf("The number after swapping first and last digit is: %d", swap);
    

    return 0;
}