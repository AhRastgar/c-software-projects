#include <stdio.h>

// function
void square(int lenght)
{
	// the operation
	for (int loop = 1; loop <= lenght; loop++) 
	{
		for (int v = 1; v <= lenght; v++) {
			
			// output
			if (loop == v) {
				printf ("* ");
			}
			else if (v == (lenght + 1) - loop) {
				printf ("* ");
			}
			else {
				printf ("  ");
			}
		}
		printf ("\n");
	}

}
// main funciton
int main()
{
	// variable
	int lenght;
	
	// incoming
	printf ("Please enter the Square Lenght: ");
	scanf ("%d" , &lenght);
	square(lenght);

	return 0;
}