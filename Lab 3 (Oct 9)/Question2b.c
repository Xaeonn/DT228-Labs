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
	
	scanf("%c", &a); //if you want to not read whitespace characters you can use %1s.
	scanf("%c", &b);

	printf("You entered:\n%d \n%d \n", a, b);

	return 0;
}