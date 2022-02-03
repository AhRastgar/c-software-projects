#include <stdio.h>
int main ()
{
	/* Subtitle */
	printf ("This project is for division as submission. \n");
	
	/* Variables */
	int x, y, i, a, mod;
	
	/* Incoming */
	printf ("Enter first number ");
	scanf ("%d" , &x);
	printf ("Enter second number ");
	scanf ("%d" , &y);
	
	/* the operation */
	mod = x;
	a = 0;
	
	for (i = 1; ; i++)
	{
		if (mod >= y)
		{
			a++;
			mod -= y;
		}
		else
		{
			break;
		}
	}
	
	/* Output */
	printf ("Outside the split part= %d \n" , a);
	printf ("Divide remaining= %d" , mod);
	
	return 0;
}