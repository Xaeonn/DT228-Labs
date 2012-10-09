/*
A program to take input of three integers and display them.
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

	printf("You entered:\n%d \n%d \n%d \n", a, b, c);

	return 0;
}