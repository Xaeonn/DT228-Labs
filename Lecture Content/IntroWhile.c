/*
Introducing while loops,
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	//variables
	int counter = 0;
	int fantastic = 0;

	//get input
	printf("Please enter how fantastic you are rated on a scale of one to ten:");
	scanf("%d", &fantastic);

	//Main code
	while(counter < fantastic)		//repeats code withing curly brackets until counter is no longer < fantastic
	{
		printf("You are fantastic!!!!\n");
		counter++;
	}
	return 0;
}