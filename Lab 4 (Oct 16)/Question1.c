/*
Program to say if a character input is a vowel.
Sam Boles
16/10/2012
*/


#include <stdio.h>

int main()
{
	char inp;

	printf("Please enter a character:");
	scanf("%c", &inp);

	switch(inp)
	{
		case 'a':
		printf("%c is a vowel.\n", inp);
		break;

		case 'e':
		printf("%c is a vowel.\n", inp);
		break;

		case 'i':
		printf("%c is a vowel.\n", inp);
		break;

		case 'o':
		printf("%c is a vowel.\n", inp);
		break;

		case 'u':
		printf("%c is a vowel.\n", inp);
		break;

		default:
		printf("%c is not a vowel.\n", inp);
		break;

	}

	return 0;
}