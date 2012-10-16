/*
Program to test if three side lengths make a valid triagle.
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	//variables
	int side1 = 0;
	int side2 = 0;
	int side3 = 0;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	//ask for input
	printf("Please enter three side lengths:");
	scanf("%d", &side1);
	scanf("%d", &side2);
	scanf("%d", &side3);

	//main code
	sum1 = side1 + side2;
	sum2 = side1 + side3;
	sum3 = side2 + side3;

	if(sum1 > side3 && sum2 > side2 && sum3 > side1)
	{
		printf("%d, %d and %d are valid lengths for the sides of a triagle\n", side1, side2, side3);
	}
	else
	{
		printf("%d, %d and %d are not valid lengths for the sides of a triagle\n", side1, side2, side3);
	}

	return 0;
}