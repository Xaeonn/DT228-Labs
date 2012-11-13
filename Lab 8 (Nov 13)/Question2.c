/*
A program to show 2d arrays.
Sam Boles
13/11/2012
*/

#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
	//variables
	int twoDi[ROW][COL];
	int sum = 0;
	float meanAv = 0.0;
	int min = 0;
	int max = 0;

	//get input
	for (int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			printf("Please enter a number:");
			scanf("%d", &twoDi[i][j]);
		}
	}

	//display array
	for (int k = 0; k < ROW; k++)
	{
		for(int l = 0; l < COL; l++)
		{
			printf("%d ", twoDi[k][l]);
		}
		printf("\n");
	}

	//get min and max
	min = max = twoDi[0][0];
	for (int m = 0; m < ROW; m++)
	{
		for(int n = 0; n < COL; n++)
		{
			if(twoDi[m][n] > max)
			{
				max = twoDi[m][n];
			}
			else if(twoDi[m][n] < min)
			{
				min = twoDi[m][n];
			}
		}
	}

	//get mean
	for (int o = 0; o < ROW; o++)
	{
		for(int p = 0; p < COL; p++)
		{
			sum += twoDi[o][p];
		}
	}

	meanAv = (float)sum / (ROW * COL);

	//print results
	printf("Minimum:%d\nMaximum:%d\nMean:%.1f\n", min, max, meanAv);


	return 0;
}