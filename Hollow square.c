#include <stdio.h>
int main() 
{
	// subtitle
	printf ("This project is for draw a hollow square. \n");
	
	// variable	
	int side;
	
	// variables for loop
	int i, j, h, z;
	
	// incoming
	printf ("Enter a number for side of the square ");
	scanf ("%d" , &side);
	
	// the operation & output
	for (i = 0; i < side; i++)
	{
		printf ("* ");
	}
	
	printf ("\n");
	
	for (h = 0; h < side-2; h++)
	{
		printf ("*");
		
		for (j = 0; j < 2*side-3; j++)
		{
			printf (" ");
		}
		
		printf ("*");
		printf ("\n");
	}
	
	for (z = 0; z < side; z++)
	{
		printf ("* ");
	}
	
	return 0;
}