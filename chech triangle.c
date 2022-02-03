#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This project is for draw a triangle. \n");

	/* Variables */
	int a,b,c;
	
	/* incoming */
	printf ("Enter the triangle chord ");
	scanf ("%d" , &a);
	
	printf ("Enter The height of the triangle ");
	scanf ("%d" , &b);
	
	printf ("Enter The base of the triangle ");
	scanf ("%d" , &c);
	
	/* the operation */
	if (a < b + c)
	{
		/* output */
		printf ("yes");
	}
	else
	{
		printf ("no");
	}
	
	return 0;
}