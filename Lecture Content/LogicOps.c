/*
Introducing logic operators.
Sam Boles
9/10/2012
*/


#include <stdio.h>

int main()
{
	float balance = 0.0;

	printf("Please enter balance:");
	scanf("%f", &balance);


	/* 
		&& = AND 
		|| = OR 
		! = NOT
	*/

	if(balance > 0 )
	{
		printf("You have money.\n");
	}
	else
	{
		printf("You're broke\n");
	}

	return 0;
}