/*
Further introduction to pointers.
Sam Boles
14/11/2012
*/

#include <stdio.h>

int main()
{
	//variables
	int counter = 0;
	char startPoint;
	char *Linker = (&startPoint);
	char temp = 0;
	
	printf("Please enter a sentence:");
	while(temp != '\n')
	{
		scanf("%c", Linker);
		temp = *Linker;
		Linker++;
		counter++;
	}

	Linker = (&startPoint);

	for(int i = 1; i < counter; i++)
	{
		printf("%c", *Linker);
		Linker++;
	}
	printf("\n");

	return 0;
}