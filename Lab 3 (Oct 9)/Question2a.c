/*
A program to take input of two characters and display them.
Sam Boles
9/10/2012
*/

#include <stdio.h>

int main()
{
	char a, b;

	printf("Please enter two characters:");
	
	scanf("%c", &a);
	scanf("%c", &b);

	printf("You entered:\n%c \n%c \n", a, b);

	return 0;
}