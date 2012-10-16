/*
Program to take input of a number between one and seven and output the day of the week corrasponding.
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	//variables
	int day = 0;

	printf("Please enter a number between one and seven inclusive:");
	scanf("%d", &day);

	switch(day)
	{
		case 1:
		printf("Sunday\n");
		break;

		case 2:
		printf("Monday\n");
		break;

		case 3:
		printf("Tuesday\n");
		break;

		case 4:
		printf("Wednesday\n");
		break;

		case 5:
		printf("Thursday\n");
		break;

		case 6:
		printf("Friday\n");
		break;

		case 7:
		printf("Saturday\n");
		break;

		default:
		printf("error: invalid number\n");
		break;

	}

	return 0;
}