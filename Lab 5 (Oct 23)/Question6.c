/*
Program to find the sum of odd positive integers less than 100.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int counter = 1;
	int sum = 0;

	//main code
	while(counter < 100)
	{
		sum += counter;
		counter += 2;
	}
	printf("The sum of all the odd number less than 100 is:%d\n", sum);
	return 0;
}