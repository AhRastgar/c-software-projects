#include <stdio.h>
int main()
{
	// subtitle
	printf ("This project is for Draw a triangle with stars A. \n");
	
	// variables
  	int x;
  	
	// variables for loop
	int i, j, z;
  	
  	// incoming
  	printf ("Enter a number for draw a triangle ");
  	scanf ("%d" , &x);
  	
  	// the operation & output
  	for (i=0; i<=x; i++) 
  	{
  		for (j=0; j<i; j++) 
  		{
    		printf ("* ");
    	}
    
		printf ("\n");
  	}
  	
	printf ("\n");

	return 0;
}