/*
A program to calculate the sums of rows and cols of the values in an array.
Sam Boles
20/11/2012
*/

#include <stdio.h>

#define ROW 3
#define COL 2


int main()
{
  //variables
  int matrix[ROW][COL];
  int rowSums[ROW];
  int colSums[COL];
  int max = 0;

  //get input to fill matrix
  for(int s = 0; s < ROW; s++)
  {
    for(int t = 0; t < COL; t++)
    {
      printf("Please enter a number:");
      scanf("%d", &matrix[s][t]);
    }
  }

  //fill rowSums with zeros
  for(int i = 0; i < ROW; i++)
  {
    rowSums[i] = 0;
  }

  //fill colSums with zeros
  for (int j = 0; j < COL; j++)
  {
    colSums[j] = 0;
  }

  //calculate sums of rows
  for (int k = 0; k < ROW; k++)
  {
    for(int l = 0; l < COL; l++)
    {
      rowSums[k] += matrix[k][l];
    }
  }

  //calculate sums of cols
  for (int m = 0; m < COL; m++)
  {
    for (int n = 0; n < ROW; n++)
    {
      colSums[m] += matrix[n][m];
    }
  }

  //find the max
  for(int o = 0; o < ROW; o++)
  {
    for(int p = 0; p < COL; p++)
    {
      if(matrix[o][p] > max)
      {
        max = matrix[o][p];
      }
      printf("%d ", matrix[o][p]);
    }
    printf("\n");
  }

  //output results
  //outputs row sums
  for(int q = 0; q < ROW; q++)
  {
    printf("Sum of row %d is %d.\n", q, rowSums[q]);
  }

  //output col sums
  for(int r = 0; r < COL; r++)
  {
    printf("Sum of column %d is %d.\n", r, colSums[r]);
  }

  //output max value
  printf("Maximun value is %d.\n", max);

  return 0;
}