#include <stdio.h>
#include <stdlib.h>
int main ()
{
	/* subtitle */
	printf ("This project is for pow.");

	/* variable */
	int x;
	
	/* incoming */
	printf ("Enter a number ");
	scanf ("%d" , &x);
	
	/* output */
	printf ("Pow %d \n" , x);
	printf ("pow %d \n" , x * x);
	printf ("pow %d \n" , x * x * x);
	
	return 0;
}