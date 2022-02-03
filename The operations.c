#include <stdio.h>
#include <math.h>
int main ()
{
	// subtitle
	printf ("This project is for mininmum, maximum, sum, average, standard deviation. \n");
	
	// variables
	int a, b;
	
	// variables for loop
	int i, j;
	
	// variables for operation
	int sum, avg, min, max, stdDev, stash, sum2, firstInit;
	
	// incoming
	printf ("Enter a number for number of numbers ");
	scanf ("%d" , &a);
	
	// variables for array
	int firstArray[a];
	
	// the operation
	stash=0;
	sum=0;
	avg=0;
	firstInit=0;
	
	for (i=0; i<a; i++)
	{
		printf ("Enter a number for operations ");
		scanf ("%d" , &b);
		
		firstArray[i]=b;
		
		if (firstInit==0)
		{
			min=firstArray[0];
			max=firstArray[0];
			
			firstInit=1;
		}
		
		if (firstArray[i]<min)
		{
			min=firstArray[i];
		}
			
		if (firstArray[i]>max)
		{
			max=firstArray[i];
		}
		
		sum+=b;
	}
	
	avg=sum/a;
	
	for (j=0; j<a; j++)
	{
		stash=firstArray[j]-avg;
		sum2+=pow (stash, 2);
		stdDev=sqrt (sum2/5);
	}
	
	printf ("minimum= %d \n" , min);
	printf ("maximum= %d \n" , max);
	printf ("sum= %d \n" , sum);
	printf ("average= %d \n" , sum/a);
	printf ("standard deviation= %d \n" , stdDev);
	
	return 0;
}