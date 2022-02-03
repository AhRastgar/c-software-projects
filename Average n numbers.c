#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This project is for Average between n numbers. \n");
	
	/* variable */
	float n, num, i, sum = 0;
	
	/* incoming */
	printf ("Enter a number for the number of numbers ");
	scanf ("%f" , &n);
	
	/* the operation */
	for (i = 1; i <= n; i++)
	{
		printf ("Enter your number ");
		scanf ("%f" , &num);
		sum += num;
	}
	
	/* output */
	printf ("Average numbers entered is = %f" , sum/n);
	
	return 0;
}