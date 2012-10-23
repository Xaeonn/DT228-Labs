/*
Program to preform the collatz function on a number.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int number = 0;

	//ask for input
	printf("Please enter a number:");
	scanf("%d", &number);

	//main code
	while(number != 1)
	{
		if(number % 2 == 0)
		{
			number = number / 2;
		}
		else
		{
			number = (number * 3) + 1;
		}
		printf("%d\n", number);
		
	}
	return 0;
}