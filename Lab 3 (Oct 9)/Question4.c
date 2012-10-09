/*
A program to recieve float input and output rounded varients of them.
Sam Boles
9/10/2012
*/

#include <stdio.h>

int main()
{
	float a,b,c;

	printf("Please enter three floating point numbers:");
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	printf("The numbers are: \n%.4f \n%.2f \n%.0f \n", a, b, c);

	return 0;
}