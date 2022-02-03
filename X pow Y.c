#include <stdio.h>
#include <math.h>
int main ()
{
	/* subtitle */
	printf ("This project is for first number pow second number. \n");

	/* variable */
	int x,y;
	int stash;
	
	/* incoming */
	printf ("Enter first number ");
	scanf ("%d" , &x);
	
	printf ("Enter second number ");
	scanf ("%d" , &y);
	
	/* the operation & output */
	stash = pow (x , y);
	printf ("x pow y = %d" , stash);
	
}