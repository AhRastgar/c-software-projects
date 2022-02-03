#include <stdio.h>
int main ()
{
	// subtitle
	printf ("This project is for Descending & Ascending. \n");
	
	// variables
	int x, y, min, max;
	
	// variables for loop
	int i, j, h;
	
	// incoming
	printf ("Enter a number for number of numbers ");
	scanf ("%d" , &x);
	
	// variables for array
	int num [x];
	
	// the operations
	for (i = 0; i < x; i++)
	{
		printf ("Enter a number for set Descending & Ascending ");
		scanf ("%d" , &num [i]);
	}
	
	min = num [0];
	
	for (j = 0; j < x; j++)
	{
			min = num [j];
			printf ("Descending= %d \n" , min);
	}
	
	max = num [x-1];
	
	for (h = x-1; h >= 0; h--)
	{
			max = num [h];
			printf ("Ascending= %d \n" , max);
	}
	
	return 0;
}