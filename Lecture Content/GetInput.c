/*
Program to input data
Sam Boles
2/10/2012
*/

#include <stdio.h>


int main()
{
	//create variables
	int in;

	printf("Please enter a number:");
	scanf("%d", &in);						//ask for keyboard input and put it in variable in.

	printf("You entered %d.\n", in);
	return 0;
}