/*
A program to show what not to do with pointers.
Sam Boles
20/11/2012
*/

#include <stdio.h>

int main()      //never write this sort of code
{
    //variables
    int var1;
    int *ptr;
    var1 = 1;
    ptr = &var1;
  
    //output
    printf("the address of var1 is %d\n", &var1);     // the %d should be %p
    printf("ptr contains %p\n", ptr);                 // there is a missing & and should be &ptr 
    printf("*ptr contains %d\n", ptr);                // there is a missing * (indirection operator) and therefore should be *ptr

	return 0;
}