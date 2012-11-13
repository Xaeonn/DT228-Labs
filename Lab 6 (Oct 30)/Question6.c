/*
A program to read in an array of numbers then sort them into ascending order.
Sam Boles
30/10/2012
*/
#include <stdio.h>
#define arraySize 3 	//any number can be iserted instead of the 3 to sort a larger number of numbers.


int main()
{
	//variables
	int in [arraySize];
	int temp = 0;
	int mini  = 0;

	//get iput
	for(int i = 0; i < arraySize; i++)
	{
		printf("Please enter a number:");
		scanf("%d", &in[i]);
	}

	//sort array
	for (int j = 0; j < arraySize; j++)
	{
		mini = j;

		for (int k = j + 1; k < arraySize; k++)
		{
			if(in[mini] > in[k])
			{
				mini = k;
			}
		}
		temp = in[j];
		in[j] = in[mini];
		in[mini] = temp;
	}

	//output the new array
	printf("Reverse array:\n");

	for (int l = 0; l < arraySize; l++)
	{
		printf("%d\n", in[l]);
	}

	return 0;
}