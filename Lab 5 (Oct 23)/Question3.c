/*
Program to display the positive multiples of a number between 1 and 5 that are less than twenty.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int number = 0;
	int counter = 2;
	int temp = 0;

	//get input
	while(number < 1 || number > 5)
	{
		printf("Please enter a number between one and five:");
		scanf("%d", &number);
	}

	//main code
	temp = number;

	while(temp < 21)
	{
		printf("%d\n", temp);
		temp = number * counter;
		counter++;
	}
	return 0;
}