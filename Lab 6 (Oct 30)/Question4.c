/*
A program to read in an array of numbers then transfer them to another array in reverse then output the new array.
Sam Boles
30/10/2012
*/
#include <stdio.h>
#define arraySize 5


int main()
{
	//variables
	int in [arraySize];
	int out [arraySize];

	//get iput
	for(int i = 0; i < arraySize; i++)
	{
		printf("Please enter a number:");
		scanf("%d", &in[i]);
	}

	//transfer in to out
	for (int j = 0; j < arraySize; j++)
	{
		out[j] = in[arraySize - (j + 1)];
	}

	//output the new array
	printf("Reverse array:\n");

	for (int k = 0; k < arraySize; k++)
	{
		printf("%d\n", out[k]);
	}

	return 0;
}