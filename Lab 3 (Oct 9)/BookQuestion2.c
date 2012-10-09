/*
A program to use the scanf function.
Sam Boles
9/10/2012
*/

#include <stdio.h>

int main()
{
	//Variables
	//integers
	int first = 0;
	int second, third, forth;
	second = third = forth = 0;
	int i = 0;
	//floats
	float principal, rate, time;
	float f = 0;
	//chars
	char keyval1, keyval2;
	char c;
	//long ints
	long total1, total2, total3;
	total1 = total2 = total3 = 0;
	long l = 0;


	printf("Please enter five numbers:");
	//int scanf input
	scanf("%d", &first);
	scanf("%d", &second);
	scanf("%d", &third);
	scanf("%d", &forth);
	scanf("%d", &i);

	printf("Please enter four floats:");
	//float scanf input
	scanf("%f", &principal);
	scanf("%f", &rate);
	scanf("%f", &time);
	scanf("%f", &f);

	printf("Please enter three characters:");
	//char scanf input
	scanf("%c", &keyval1);
	scanf("%c", &keyval2);
	scanf("%c", &c);

	printf("Please enter four long integers:");
	//long int input
	scanf("%ld", &total1);
	scanf("%ld", &total2);
	scanf("%ld", &total3);
	scanf("%ld", &l);




	return 0;
}