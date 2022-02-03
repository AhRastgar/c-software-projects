#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This projece is for draw a square. \n");
	
	/* variables */
	float x;
	
	/* incoming */
	printf ("Enter the side of the square ");
	scanf ("%f" , &x);
	
	/* the operation */
	
	for (int i=0; i<x; i++)
	{
		for (int j=0; j<x; j++)
		{
			printf ("* ");
		}
		printf ("\n");
	}
	
	return 0;
}