/*
A program to convert fahrenheit to celcius.
Sam Boles
9/10/2012
*/

#include <stdio.h>

int main()
{
	
	float fahrenheit = 0;
	float celcius = 0;

	printf("Enter a temperature in degrees Fahrenheit:");//Stupid fahrenheit.
	scanf("%f", &fahrenheit);

	celcius = (fahrenheit - 32) * (5.0/9);

	printf("%.2f Fahrenheit is %.2f degrees Celcius. \n", fahrenheit, celcius);

	return 0;
}