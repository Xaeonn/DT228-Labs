/*
A program to multiply the elements of two arrays by each other.
Sam Boles
13/11/2012
*/
#include <stdio.h>
#define arraySize 5


int main()
{
	//variables
	int factors1[arraySize];
	int factors2[arraySize];

	//get iput
	for (int i = 0; i < arraySize; i++) 
	{
		printf("Please enter a number:");
		scanf("%d", &factors1[i]); 
		printf("Please enter a number to multiply by:");
		scanf("%d", &factors2[i]); 
	}

	for (int j = 0; j < arraySize; j++) 
	{
		printf("%d * %d = %d\n", factors1[j], factors2[j], (factors1[j] * factors2[j]));
	}

	
	printf("\n");

	return 0;
}