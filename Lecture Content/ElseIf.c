/*
More intro to the if statement.
Sam Boles
9/10/2012
*/


#include <stdio.h>

int main()
{
	float balance = 0.0;

	printf("Please enter balance:");
	scanf("%f", &balance);

	if(balance > 0)
	{
		printf("You have money.\n");
	}
	else if(balance == 0)
	{
		printf("Zero balance\n");
	}
	else
	{
		printf("In overdraft\n");
	}

	return 0;
}