/*
Introducing do while statement.
Sam Boles
16/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	float num, total;
	total = 0.0;
	num = 0.0;

	//main code
	printf("Please enter numbers to  be added up and zero to finish.\n");
 
	do	//carrys out once
	{
		printf("Enter a new number:");
		scanf("%f", &num);
		total += num;
	}
	while(num != 0); //then repeats until num equal to zero

	printf("\nTotal is %.2f.\n", total);
	return 0;
}