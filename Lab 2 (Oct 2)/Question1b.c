/*
Lab questions for DT228/1 on arithmatic operations.
Sam Boles
2/10/2012
*/


#include <stdio.h>

int main()
{
	float average = 0;
	float a = 1.0;

	a = a + 1.1; 
	a = a + 1.2;
	a = a + 1.3;
	a = a + 1.4;
	a = a + 1.5;
	a = a + 1.6;
	a = a + 1.7;
	a = a + 1.8;
	a = a + 1.9;
	a = a + 2.0;

	average = a/11;

	printf("Average is %f\n", average);
	return 0;
}