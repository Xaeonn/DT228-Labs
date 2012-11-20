/*
A program to calculate the sum of the values in an array.
Sam Boles
20/11/2012
*/

#include <stdio.h>

#define ROW 4
#define COL 6


int main()
{
	//variables
	int data[ROW][COL] = 
					{ 	
						{3, 2, 5, 7, 4, 2},
                        {1, 4, 4, 8, 13, 1},
						{9, 1, 0, 2, 0, 0},
                        {0, 2, 6, 3, -1, -8}
                    };
    
    int sum = 0;

    //calculate sum
    for (int i = 0; i < ROW; i++)
    {
    	for(int j = 0; j < COL; j++)
    	{
    		sum += data[i][j];
    	}
    }

    //output result
    printf("Sum is equal to %d.\n", sum); 

	return 0;
}