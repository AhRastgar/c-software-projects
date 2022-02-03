#include <stdio.h>
int main()
{
	// subtitle
	printf ("***This project is for draw a 4 shapes*** \n \n \n \n");
	
	// shape
	printf ("			***circle***			\n");
	
	// variable
	float radius,k;
	
	// incoming
	printf ("Enter the Radius of the circle size ");
	scanf ("%f" , &radius);
	
	// variable
	float temp_num = 2;

	// the operation
	for (int count = - radius; count <= radius; count++)
	{
		for (int counter = - radius; counter <= radius; counter++)
		{
			k = ((count * temp_num)/ radius) * ((count * temp_num)/ radius) + (counter / radius) * (counter / radius);
			
			if (k > 0.95 && k < 1.08)
			{
				// output
				printf ("*");
			}
			else
			{
				printf (" ");
			}
		}
		printf ("\n");
	}
	
	printf ("\n \n \n \n");
	
	// shape
	printf ("			***triangle***			\n");
	
	// variable
	int triangle;
  	
  	// variables for loop
  	int i, j, h, z, g, r;
  	
  	// incoming
  	printf ("Enter a number for draw a triangle ");
  	scanf ("%d" , &triangle);
  	
  	// the operation & output
  	for (i=0; i<=triangle; i++) 
  	{
  		for (j=0; j<i; j++) 
  		{
    		printf ("* ");
    	}
		printf ("\n");
  	}
	
	printf ("\n \n \n \n");	
	
	// shape
	printf ("			***square***			\n");
	
	// variable	
	int side;
	
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
	
	printf ("\n \n \n \n");
	
	// shape
	printf ("			***rectangle***			\n");
	
	// variable
	int width, len;
	
	// incoming
	printf ("Enter a number for length of the Rectangle ");
	scanf ("%d" , &len);
	
	printf ("Enter a number for width of the Rectangle ");
	scanf ("%d" , &width);
	
	// the operation
	for (i = 0; i < len; i++)
	{
		printf ("* ");
	}
	
	printf ("\n");
	
	for (j = 0; j < width - 2; j++)
	{
		printf ("*");
		for (z = 0; z < 2 * len - 3; z++)
		{
			printf (" ");
		}
		printf ("*");
		printf ("\n");
	}
	
	for (h = 0; h < len; h++)
	{
		printf ("* ");
	}
	
 return 0;

}