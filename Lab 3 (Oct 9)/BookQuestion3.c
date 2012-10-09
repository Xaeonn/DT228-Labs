/*
A program to take input of three integers and reverse them.
Sam Boles
9/10/2012
*/

#include <stdio.h>

int main()
{
	int a,b,c;
	a = b = c = 0;

	printf("Please enter three numbers:");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("They are %d, %d, %d in reverse order. \n", c, b, a);

	return 0;
}