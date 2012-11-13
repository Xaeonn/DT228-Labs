/*
A program to read in an array of numbers then reorder them by switching alternate integers and then output the new array.
Sam Boles
30/10/2012
*/
#include <stdio.h>
#define arraySize 4


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
		printf("%d\n", in[j]);
	}

	//fill array out with the reordered elements of in
	for (int k = 0; k < arraySize; k++)
	{
		if(k % 2 == 0)
		{
			out[k] = in[k + 1];
		}
		else
		{
			out[k] = in[k - 1];
		}
	}

	//output reordered array
	printf("\nReordered elements:\n");

	for(int l = 0; l < arraySize; l++)
	{
		printf("%d\n", out[l]);
	}

	return 0;
}