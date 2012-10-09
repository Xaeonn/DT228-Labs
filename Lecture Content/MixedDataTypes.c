/*
Program to show mixed data type conversions.
Sam Boles
2/10/2012
*/

#include <stdio.h>


int main()
{
	//create variables
	int var1 = 10;
	float var2 = 2.5;
	float var3 = 0;			//It's a good programming practice to always give variables a value on creation to clear any random data before use.
	int var4 = 0;
	float var5 = 0;
	float var6 = 0;

	//run arithmatic operations
	var3 = var1 / var2; 	//temporarily change var1 into float so the float var2 can divide it then changes it back.
	var4 = var1 / var2; 	//same as above but store result as float.
	var5 = var1/4;			//and again.
	var6 = (float)var1/4;	//you can promote(cast) a variable into another variable type by putting (dataType) infront of the data variable involved
	//Note: you can't cast a varible into a lower data type. The order of the variables is: short < int < float.

	//display results
	printf("var3 = %f\nvar4 = %d\nvar5 = %f \nvar6 = %f\n", var3, var4, var5, var6);

	return 0;
}