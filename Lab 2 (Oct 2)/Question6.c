/*
Program to test the different arithmatic operators.
Sam Boles
2/10/2012
*/

#include <stdio.h>

int main()
{
	int sum = 15 + 10;
	int difference = 15 - 10;
	int product = 15 * 10;
	float ratio = 15 / 10;
	int modulus = 15 % 3;

	printf("15 + 10 = %d\n", sum);
	printf("15 - 10 = %d\n", difference);
	printf("15 * 10 = %d\n", product);
	printf("15 / 10 = %f\n", ratio);
	printf("15 %% 10 = %d\n", modulus);

	return 0;
}