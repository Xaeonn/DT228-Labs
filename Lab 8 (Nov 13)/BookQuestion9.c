/*
A program to use 2d arrays and find all values below zero.
Sam Boles
13/11/2012
*/

#include <stdio.h>
#define ROW 4
#define COL 5

int main()
{
	//variables
	int twoDi[ROW][COL];
	int min = 0;

	//get input
	for (int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			printf("Please enter a number:");
			scanf("%d", &twoDi[i][j]);
		}
	}

	//find values below 0
	for (int k = 0; k < ROW; k++)
	{
		for(int l = 0; l < COL; l++)
		{
			if(twoDi[k][l] < min)
			{
				printf("%d (%d,%d)\n", twoDi[k][l], k, l);
			}
		}
	}

	return 0;
}