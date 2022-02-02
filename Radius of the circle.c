#include <stdio.h>

int main ()
{
	/* subtitle */
	printf ("This project is for radius of the circle. \n");

	/* variable */
	float r, p=3.14;
	
	/* incoming */
	printf ("Enter the radius of the circle ");
	scanf ("%f" , &r);
	
	/* the operation & output */
	printf ("circle diameter= %f" , r * 2);
	printf ("perimeter of the circle= %f" , 2 * p * (r * r));
	printf ("circle area= %f" , p * (r * r));
	
	return 0;
}