/*
Program to count down from ten.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int counter = 10;

	//main code
	while(counter > 1)
	{
		printf("%d,", counter);
		counter--;
	}
	printf("%d\n", counter);
	return 0;
}