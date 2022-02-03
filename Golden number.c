#include <stdio.h>
int main ()
{
	/* subtitle */
	printf ("This porject is for golden number. \n");
	
	/* variables */
	int x;
	
	/* incoming */
	printf ("Enter a number ");
	scanf ("%d" , &x);
	
	/* the operation & output */
	printf ("If the number you give is the length, the ratio is= %d \n" , x/1.618);
	printf ("if the number you give is the width, the ratio is= %d" , x*1.618);
	
	return 0;
}