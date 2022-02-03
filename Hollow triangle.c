#include <stdio.h>
int main()
{
	// subtitle
	printf ("This project is for draw a hollow tringle. \n");
	
	// variables
	int length, u, d;
	char dir;
	
	// variables for loop
	int i, j, h, g, z, r;
	
	// incoming
	printf ("Enter u or d for direction (u=up, d=down)");
	scanf ("%c" , &dir);
	
	printf ("Enter a number for length ");
	scanf ("%d" , &length);
	
	// the operation
	if (dir == 'u')
	{
		for (i = 1; i <= length - 1; i++)
		{
			printf ("*");
			if (i > 1)
			{
				for (j = 1; j < i; j++)
				{
					printf ("  ");
				}
			}
			
			if (i > 0)
			{
				printf ("*");
				printf ("\n");
			}
			else
			{
				printf ("\n");
			}
		}
		
		for (h = 0; h < length; h++)
		{
			printf ("* ");
		}
	}
	
	if (dir == 'd')
	{
		for (z = 0; z < length; z++)
		{
			printf ("* ");
		}
		
		printf ("\n");
			
		for (r = length - 1; r > 0; r--)
		{
			printf ("*");
			if (r < length + 2)
			{
				for (g = 0; g < r-1; g++)
				{
					printf ("  ");
				}
			}
		
			if (r < length + 2)
			{
				printf ("*");
				printf ("\n");
			}
			else
			{
				printf ("\n");
			}
		}
	}
	
    return 0;
}