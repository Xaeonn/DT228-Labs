/*
More introduction to while.
Sam Boles
16/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int counter = 0;
	int countTo = 0;

	//ask for input
	printf("Please enter a number to count upto:");
	scanf("%d", &countTo);

	//main code
	while(counter < countTo)
	{
		printf("%d\n", counter+1);
		counter++;
	}
	return 0;
}