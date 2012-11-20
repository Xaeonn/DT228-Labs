/*
A program to show the use of the indirection operator.
Sam Boles
20/11/2012
*/

#include <stdio.h>

int main()
{
	//variables
	int number = 6;
	int *pointTo = &number;
	/*		including this will cause a seg fault(runtime error) (BAD!!).. 
	int *randPoint = (int *)0x7fff6724fc21;
	*randPoint = 10;
	*/

	//output
	printf("Number contains %d.\n", *pointTo);

	pointTo++;

	printf("Pointer pointTo now points to memory containing the value %d\n", *pointTo);

	//printf("randPoint contains value %d at address %p.\n", *randPoint, randPoint);

	return 0;
}