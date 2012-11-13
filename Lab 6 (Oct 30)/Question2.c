/*
A program to read in a list of temperatures in fahrenheit and out put the temperature in celcius and fahrenheit.
Sam Boles
30/10/2012
*/
#include <stdio.h>
#define arraySize 3


int main()
{
	//variables
	int fahren [arraySize];
	float celcius [arraySize];

	//get iput
	for(int i = 0; i < arraySize; i++)
	{
		printf("Please enter the temperature in fahrenheit:");
		scanf("%d", &fahren[i]);
	}

	//transfer in to out
	for (int j = 0; j < arraySize; j++)
	{
		celcius[j] = (fahren[j] - 32) * (5.0/9);
	}

	//print out the temperatures
	for (int k = 0; k < arraySize; k++)
	{
		printf("Temperature:\nFahrenheit = %d\nCelcius = %f\n", fahren[k], celcius[k]);
	}

	return 0;
}