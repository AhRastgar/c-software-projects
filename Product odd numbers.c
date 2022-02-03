#include <stdio.h>
int main () 
{
	/* subtitle */
	printf ("This project is for product odd numbers. \n");
	
	/* variables */
	int firstnum, secnum;
	int prd = 1;
	
	/* incoming */
	printf ("please enter the first number ");
	scanf ("%d" , &firstnum);
	
	printf ("please enter the second number ");
	scanf ("%d" , &secnum);
	
	/* the operation */
	for (int i = firstnum; i <= secnum; i++)
	{
		if (i % 2 == 1)
		{	
			prd *= i;
		}
	}
	
	/* output */
	printf ("product odd numbers is = %d" , prd);
			
	return 0;
}