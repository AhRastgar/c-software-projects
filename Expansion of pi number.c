#include <stdio.h>
int main ()
{
	// subtitle
	printf ("This project is for Expansion of Pi number. \n");
	
	// variables
	float radius, circumference, pi;
	char p = 3.14;
	
	// incoming
	printf ("Enter a number for radius ");
	scanf ("%f" , &radius);
	
	// the operation
	circumference = 2 * p * radius;
	
	pi = circumference / radius;
	
	// output
	printf ("The expansion of Pi number is = %f" , pi);
	
	return 0;
}