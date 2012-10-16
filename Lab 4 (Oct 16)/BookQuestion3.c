/*
Program to test if one number is divisble by 
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	//variables
	int number = 0;
	int divisor = 0;

	//ask for input
	printf("Please enter two numbers:");
	scanf("%d", &number);
	scanf("%d", &divisor);

	//main code

	if(number % divisor == 0)
	{
		printf("%d is divisible by %d\na", number, divisor);
	}
	else
	{
		printf("%d is not divisible by %d\n", number, divisor);
	}

	return 0;
}