/*
A program to display the volume of a cube with total length of all sides equalling 2.8.
Sam Boles
2/10/2012
*/

#include <stdio.h>

int main()
{
	float totalLength = 2.8;
	float sideLength;
	float volume;

	sideLength = totalLength/12;
	volume = sideLength * sideLength * sideLength;

	printf("Volume is %f\n", volume);

	return 0;
}