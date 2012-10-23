/*
Program to out put all the even numbers between 1 - 100 inclusive.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int counter = 2;

	//main code
	while(counter < 100)
	{
		printf("%d,", counter);
		counter += 2;
	}
	printf("%d\n", counter);

	return 0;
}