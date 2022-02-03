#include <stdio.h>
int main ()
{
	// subtitle
	printf ("This project is for Prime numbers. \n");
	
	// variables
	int a, b;
	
	// variables for loop
	int i;
	
	// incoming
	printf ("Enter a number for check ");
	scanf ("%d" , &a);
	
	// the operation
	b=0;
	
	for (i=2; i<a; i++)
	{
    	if (a%i==0)
    	{
    		b=1;
    	}
	}
	
	// output
	if (b==0)
	{
		printf ("yes");
	}
	else
	{
    	printf ("no");
	}
	
	return 0; 
}