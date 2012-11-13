/*
Program to introduce character arrays.
Sam Boles
23/10/2012
*/

#include <stdio.h>



int main()
{
	//variables
	char word [50] = {'H','e','l','l','o'};
	int counter = 0;

	//get input
	printf("Please enter a sentence:");

	while(counter < 50)
	{
		scanf("%c", &word[counter]);

		if(word[counter] == '\n')
		{
			break;
		}
		counter++;
	}

	//main code
	for(int i = 0; i < counter; i++)
	{
		printf("%c", word[i]);
	}
	printf("\n");
	return 0;
}