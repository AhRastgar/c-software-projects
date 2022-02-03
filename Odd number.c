#include <stdio.h>
int main ()
{
	// subtitle
	printf ("This project is for Prime numbers. \n");
	
	// variables
	int a;
	
	// variables for loop
	int i;
	
	// incoming
	printf ("Enter a number for check ");
	scanf ("%d" , &a);
	
	// the operation & output
	if (a % 2 == 1)
	{
		printf ("yes");
	}
	else
	{
    	printf ("no");
	}
	
	return 0; 
}