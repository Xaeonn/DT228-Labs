/*
Program to introduce pointers.
Sam Boles
14/11/2012
*/

#include <stdio.h>

int main()
{
	//variables
	int var1 = 1;
	char var2 = 'A';

	int *ptr1 = &var1;		//Create pointer that points to the address in memory of var1
	char *ptr2 = &var2;		//similarly for var2

	//output
	printf("ptr1 contains %p\n", ptr1);
	printf("ptr1 points to %d\n", *ptr1);
	printf("ptr2 contains %p\n", ptr2);
	printf("ptr2 points to %c\n", *ptr2);

	return 0;
}