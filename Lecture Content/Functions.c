/*
Program to introduce functions.
Sam Boles
6/11/2012
*/

#include <stdio.h>

int isEven(int number)
{
	if(number % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int i = 0;
	printf("Please enter a number:");
	scanf("%d", &i);
	if(isEven(i)==1)
	{
		printf("%d is even.\n", i);
	}
	else
	{
		printf("%d is not even.\n", i);
	}
	return 0;
}