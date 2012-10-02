/*
Using arithmatic operations to calculate the volume and surface area of a box.
Sam Boles
2/10/2012
*/

#include <stdio.h>

int main()
{
	//input variables
	float height = 10;
	float length = 11.5;
	float width = 2.5;

	//output variables
	float volume = 0;
	float surfaceArea = 0;

	//temporary use variables
	float faceOne, faceTwo, faceThree;

	//get volume
	volume = height * width * length;

	//get surface area
	faceOne = height * width;
	faceTwo = length * width;
	faceThree = length * height;
	surfaceArea = (2 * faceOne) + (2 * faceTwo) + (2 * faceThree);

	//display results
	printf("Volume is %fcm^3\n", volume);
	printf("surfaceArea is %fcm^2\n", surfaceArea);


	return 0;
}