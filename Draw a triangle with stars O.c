#include <stdio.h>
int main()
{
	// subtitle
	printf ("This project is for Draw a triangle with stars O. \n");
	
	// variables
	int x;
	
	// variables for loop
	int i, j, z;
	
	// incoming
	printf ("Enter a number for draw a triangle ");
	scanf ("%d" , &x);
	
	// the operation & output
	for (i=x; i>0; i--)
	{
		for (j=0; j<i; j++)
  		{
    		printf ("* ");
    	}
		
		printf ("\n");
		
		for (z=i; z<=x; z++)
		{
			printf ("  ");
		}
	}
	printf ("\n");
	
	return 0;
}