/*
Program to introduce multidimensional arrays.
Sam Boles
6/11/2012
*/

#include <stdio.h>
#define PAWNSB 6
#define PAWNSW 1
#define ROW 8
#define COL 8



int main()
{
	//variables
	char newBoard[ROW][COL];

	//Make board blank
	for(int j = 0; j < ROW; j++)
	{
		for (int i = 0; i < COL; i++)
		{
			newBoard[j][i]='0';
		}
	}

	//Pawn setup
	for(int p = 0; p < COL; p++)
	{
		newBoard[PAWNSB][p]='P';
		newBoard[PAWNSW][p]='P';
	}
	//piece setup
	newBoard[0][0] = newBoard[0][7] = newBoard[7][0] = newBoard[7][7]='C';
	newBoard[0][1] = newBoard[0][6] = newBoard[7][1] = newBoard[7][6]='N';
	newBoard[0][2] = newBoard[0][5] = newBoard[7][2] = newBoard[7][5]='B';
	newBoard[0][3] = newBoard[7][3] ='K';
	newBoard[0][4] = newBoard[7][4] ='Q';




	for(int k = 0; k < ROW; k++)
	{
		printf("\t");
		for (int l = 0; l < COL; l++)
		{
			printf("%c ",newBoard[k][l]);
		}
		printf("\n");
	}

	int gameOver = 0;
	int moveFrom[2];
	int moveTo[2];
	int temp[2];

	while(gameOver != 1)
	{
		printf("Please enter your move in the form \"square to move (eg. a4)\" \"square to move to\":");
		scanf("%c,%c", & temp[0], &temp[1]);
		printf("%d\n", temp[0]);
		break;
		scanf("%d,%d", &moveTo[0], &moveTo[1]);

	}

	return 0;
}