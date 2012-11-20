/*
A program to multiply the elements of two arrays.
Sam Boles
20/11/2012
*/

#include <stdio.h>

#define ROW 3
#define COL 4


int main()
{
	//variables
	int matrixA[ROW][COL];
	int matrixB[ROW][COL];
	int matrixProd[ROW][COL];

	//get values for matrices
	for(int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{	
			printf("Please enter a two numbers to multiply:");
			scanf("%d", &matrixA[i][j]);
			scanf("%d", &matrixB[i][j]);
		}
	}
	
	//multiply the two arrays
	for(int k = 0; k < ROW; k++)
	{
		for (int l = 0; l < COL; l++)
		{
			matrixProd[k][l] = matrixA[k][l] * matrixB[k][l];
		}
	}


	//print out array of products
	for(int m = 0; m < ROW; m++)
	{
		for (int n = 0; n < COL; n++)
		{
			printf("%d ", matrixProd[m][n]);
		}
		printf("\n");
	}

	return 0;
}