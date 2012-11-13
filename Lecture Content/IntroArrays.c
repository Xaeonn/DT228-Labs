/*
Program to introduce arrays.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	int numberStudents = 0;
	int sum = 0;
	float averageAge = 0;

	printf("Please enter the number of number of students:");
	scanf("%d", &numberStudents);

	int ages [numberStudents];					//declare array (list of variables) with the number scanf got elements.

	//get input
	for(int i = 0; i < numberStudents; i++) 	//starting at 0 is essential as the first variable in an array is [0] not [1].
	{
		printf("Please enter age:");
		scanf("%d", &ages[i]);
	}											//for loop used to fill up the array with values

	//main code
	for (int j = 0; j < numberStudents; j++)
	{
		sum += ages[j];
	}

	averageAge = float(sum) / numberStudents;

	printf("Average age of students is %.1f\n", averageAge);

	
	return 0;
}