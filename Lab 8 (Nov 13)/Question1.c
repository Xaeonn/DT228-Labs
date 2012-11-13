/*
A program to play with arrays.
Sam Boles
13/11/2012
*/
#include <stdio.h>
#define arraySize 10


int main()
{
	//variables
	int numbers[arraySize];

	//get iput
	for (int i = 0; i < 10; i++) 
	{
		numbers[i] = 9 - i; 
	}

	for (int j = 0; j < 10; j++) 
	{
		numbers[j] = numbers[ numbers[j] ]; 
	}

	//siplay array in a visual way to enhance undersatnding
	for (int j = 0; j < arraySize; j++)
	{
		for(int k = 0; k < numbers[j]; k++)		//shows the size of the number visually by representing it as a number of stars.
		{
			printf("* ");
		}

		printf("\n");
	}

	//run this program to see how the loops worked.

	return 0;
}