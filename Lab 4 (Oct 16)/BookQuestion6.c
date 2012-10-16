/*
Program to take input of a single digit number and output the english name.
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	//variables
	int numeral = 0;

	printf("Please enter a sigle digit number:");
	scanf("%d", &numeral);

	switch(numeral)
	{
		case 0:
		printf("Zero\n");
		break;

		case 1:
		printf("One\n");
		break;

		case 2:
		printf("Two\n");
		break;

		case 3:
		printf("Three\n");
		break;

		case 4:
		printf("Four\n");
		break;

		case 5:
		printf("Five\n");
		break;

		case 6:
		printf("Six\n");
		break;

		case 7:
		printf("Seven\n");
		break;

		case 8:
		printf("Eight\n");
		break;

		case 9:
		printf("Nine\n");
		break;

		default:
		printf("error: invalid number\n");
		break;

	}

	return 0;
}