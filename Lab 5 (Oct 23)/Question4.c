/*
Program to count up to ten.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int counter = 1;

	//main code
	while(counter < 11)
	{
		printf("%d\t", counter);
		if(counter == 3)
		{
			printf("This number is three.\n");
		}
		else if(counter == 7)
		{
			printf("This number is seven.\n");
		}
		else
		{
			printf("\n");
		}
		counter++;
	}
	printf("%d\n", counter);
	return 0;
}