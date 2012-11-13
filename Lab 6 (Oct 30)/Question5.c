/*
A program to read in an array of characters then print them out.
Sam Boles
30/10/2012
*/
#include <stdio.h>
#define arraySize 5


int main()
{
	//variables
	char in [arraySize];

	//get iput
	for(int i = 0; i < arraySize; i++)
	{
		printf("Please enter a character:");
		scanf(" %c", &in[i]);
	}

	//print out in
	for (int j = 0; j < arraySize; j++)
	{
		printf("%c", in[j]);
	}
	printf("\n");

	return 0;
}