/*
A program to calculate the area of a circle.
Sam Boles
2/10/2012
*/

#include <stdio.h>

int main()
{
	const float pi = 3.14;
	float radius = 4.8;
	float area = 0;

	area = pi * (radius * radius);

	printf("Area is %fcm^2\n", area);

	return 0;
}