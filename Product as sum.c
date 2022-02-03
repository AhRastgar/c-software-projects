#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This project is for produt as sum. \n");
	
	/* variable */
	int x, y, i, sum = 0;
	
	/* incoming */
	printf ("Enter first number ");
	scanf ("%d" , &x);
	printf ("Enter second number ");
	scanf ("%d" , &y);
	
	/* the operation */
	for (i=1; i<=y; i++)
	{
		sum+=x;
	}

	/* output */
	printf ("Product as sum= %d" , sum);
	
	return 0;
}