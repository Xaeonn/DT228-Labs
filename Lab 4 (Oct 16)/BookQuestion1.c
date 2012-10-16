/*
Program to take in relationship status code and output status.
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	char marrigeStatus = ' ';

	printf("Relationships status codes: \nM = Married \nS = Single \nW = Widowed \nE = Seperated \nD = Divorced\n");
	printf("Please enter a your relationship status code:");
	scanf("%c", &marrigeStatus);

	switch(marrigeStatus)
	{
		case 'M':
		printf("Married\n");
		break;

		case 'S':
		printf("Single\n");
		break;

		case 'W':
		printf("Widowed\n");
		break;

		case 'E':
		printf("Seperated\n");
		break;

		case 'D':
		printf("Divorced\n");
		break;

		default:
		printf("error: invalid code\n");
		break;

	}

	return 0;
}