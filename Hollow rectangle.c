#include <stdio.h>
int main ()
{
	// subtitle
	printf ("This project is for hollow Rectangle. \n");
	
	// variable
	int length, width;
	
	// variable for loop
	int i, j, z, h;
	
	// incoming
	printf ("Enter a number for length of the Rectangle ");
	scanf ("%d" , &length);
	
	printf ("Enter a number for width of the Rectangle ");
	scanf ("%d" , &width);
	
	// the operation
	for (i = 0; i < length; i++)
	{
		printf ("* ");
	}
	
	printf ("\n");
	
	for (j = 0; j < width - 2; j++)
	{
		printf ("*");
		for (z = 0; z < 2 * length - 3; z++)
		{
			printf (" ");
		}
		printf ("*");
		printf ("\n");
	}
	
	for (h = 0; h < length; h++)
	{
		printf ("* ");
	}
	
	return 0;
}