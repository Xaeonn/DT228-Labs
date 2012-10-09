/*
A program to calculate the number of heartbeats that one has made in there life based on them inputting there age.
Sam Boles
9/10/2012
*/

#include <stdio.h>

int main()
{
	unsigned int heartbeats = 0;
	int age = 0;
	int ageMinutes = 0;
	long test =992992929292992;

	printf("%ld\n",test);

	printf("Please enter your age:");
	scanf("%d", &age);

	ageMinutes = age * 365 * 24 * 60; 
	heartbeats = ageMinutes * 75;

	printf("You have had aproximately %u heartbeats.\n", heartbeats);

	return 0;
}