#include<stdio.h>
int main()
{
    int x = 10;
    char y = 'k'; //char asciii value is 107
    int sum = x + y; //implicit type casting
    printf("%d\n", sum);  // output will be 117

    float a = 1.2;
	//int b  = a; //Compiler will throw an error for this
	int b = (int)a + 1;
	printf("Value of a is %f\n", a);
	printf("Value of b is %d\n",b);

    return 0;
}