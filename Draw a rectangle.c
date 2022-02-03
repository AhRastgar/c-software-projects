#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This project is for draw a Rectangle. \n");
	
	/* variables */
	int lenght, width;
	
	/* variables for loop */
	int i,j;
	
	/* incoming */
	printf ("Enter a number for lenght ");
	scanf ("%d" , &lenght);
	
	printf ("Enter a number for width ");
	scanf ("%d" , &width);
	
	/* the operation */
	printf ("\n");
	
	for (i=0; i<width; i++)
	{
		for (j=0; j<lenght; j++)
		{
			printf ("* ");
		}
		printf ("\n");
	}
	
	return 0;
}