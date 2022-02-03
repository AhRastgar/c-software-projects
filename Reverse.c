#include <stdio.h>
int main ()
{
	// subtitle
	printf ("This project is for symmetrical number. \n");
	// variables
	int incomingNum, stashNumMod, incomingNumReverse=0;
	
	// incoming
	printf ("Enter a number for check symmetrical number ");
	scanf ("%d" , &incomingNum);
	
	// variables
	int incomingNumStash=incomingNum;
	
	// the operations
	if (incomingNum>0)
	{
		while (incomingNum>0)
		{
	    	stashNumMod=incomingNum%10;
	    	incomingNum=incomingNum/10;
	    	
			incomingNumReverse=incomingNumReverse*10+stashNumMod;
		}
	}
	
	// output
	if (incomingNumStash==incomingNumReverse)
	{
    	printf ("This number is a symmetrical number.");
	}
	else
	{
    	printf ("This number isn't a symmetrical number.");
	}
	
	return 0;
}