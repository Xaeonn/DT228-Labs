/*
Program to test which if any of three values are equal.
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	//Variables
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;

	//Ask for input
	printf("Please enter three numbers:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	

	//Main code
	if(n1 == n2)
	{
		if(n1 == n3)
		{
			printf("n1, n2 and n3 have the same value.\n");
		}
		else
		{
			printf("n1 and n2 have the same value.\n");
		}
	}

	else if (n1 == n3)
	{
		printf("n1 and n3 have the same value.\n");
	}

	else if (n2 == n3)
	{
		printf("n2 and n3 have the same value.\n");
	}

	else
	{
		printf("n1, n2 and n3 all have different values.\n");
	}

	return 0;
}