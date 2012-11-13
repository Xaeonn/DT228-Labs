/*
A program to show use of arrays.
Sam Boles
13/11/2012
*/
#include <stdio.h>
#define arraySize 15


int main()
{
	//variables
	int numbers[arraySize];

	//get iput
	for (int i = 0; i < arraySize; i++) 
	{
		printf("Please enter a number:");
		scanf("%d", &numbers[i]); 
	}

	for (int j = 0; j < arraySize; j++) 
	{
		printf("%d\n", numbers[j]);
	}

	for (int k = 0; k < arraySize; k++) 
	{
		printf("%d ", numbers[k]);
	}
	printf("\n");

	for (int l = arraySize; l > 0; l--) 
	{
		printf("%d ", numbers[l-1]);
	}
	printf("\n");

	return 0;
}