#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This porject is for Stars the size of numbers. \n");
	
	/* variables */
	int x, i;
	
	/* incoming */
	printf ("Enter a number for creat stars ");
	scanf ("%d" , &x);
	
	/* the operation & output */
	for (i=0; i<x; i++)
	{
		printf ("* ");
	}
	
	return 0;
}