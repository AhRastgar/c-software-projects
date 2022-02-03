#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This project is for Divisor against. \n");
	
	/* variables */
	int x, num;
	
	/* variables for loop */
	int i, sum;
	
	/* incoming */
	printf ("Enter a number ");
	scanf ("%d" , &x);
	
	/* the operation */
	num=x;
	sum=0;
	
	for (i=1; i<=x; i++)
	{	
		if (num%i==0)
		{
			printf ("Divide by your number is %d \n" , i);
		}
	}
	
	return 0;
}