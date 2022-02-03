#include <stdio.h>
int main ()
{
	// subtitle
	printf ("This project is for 3 minimum & 3 maximum. \n");
	
	// variables
	int x, y, min, max, counter, counter1;
	
	// variables for loop
	int i, j, z, h, g;
	
	// incoming
	printf ("Enter a number for number of numbers ");
	scanf ("%d" , &x);
	
	// variables for array
	int num [x];
	
	// the operations
	if (x >= 5)
	{	
		for (i = 0; i < x; i++)
		{
			printf ("Enter a number for search 3 min & max ");
			scanf ("%d" , &num [i]);
		}
		
		min = num [0];
		counter = 0;
		counter1 = 0;
		
		for (j = 0; j < x; j++)
		{
			if (num [j] > min)
			{
				min = num [j];
			}
			
			for (z = 0; z < 1 ; z++)
			{
				counter++;
				
				// output
				printf ("3 Minimum number is = %d \n" , min);
			}
			
			if (counter == 3)
			{
				break;
			}
		}
	}
	
	max = num [x-1];
	
	if (x >= 5)
	{
		for (h = x-1; h > 0; h--)
		{
			if (num [h] < max)
			{
				max = num [h];
			}
			
			for (g = 0; g < 1; g++)
			{
				counter1++;
				
				// output
				printf ("3 Maximum number is = %d \n" , max);
			}
			
			if (counter1 == 3)
			{
				break;
			}
		}
	}
	
	return 0;
}