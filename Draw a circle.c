#include <stdio.h>
int main()
{
	// subtitle
	printf ("This project is for draw a circle. \n");
	
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
	
 return 0;

}