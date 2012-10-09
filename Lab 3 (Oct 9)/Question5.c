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
	
	a = getchar();
	b = getchar();

	printf("You entered:\n");
	putchar(a);
	putchar('\n');
	putchar(b);
	putchar('\n');

	return 0;
}