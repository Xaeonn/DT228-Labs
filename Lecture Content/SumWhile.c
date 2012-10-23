/*
More introduction to while.
Sam Boles
16/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	float num, total;
	total = 0.0;
	num = 1.0;

	//main code
	printf("Please enter numbers to  be added up and zero to finish.\n");

	while(num != 0)		//Repeats code until user enters 0
	{
		printf("Enter a new number:");
		scanf("%f", &num);
		total += num;
	}

	printf("\nTotal is %.2f.\n", total);
	return 0;
}