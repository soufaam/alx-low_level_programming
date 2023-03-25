#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - Entry point
* Description: 'the program's description positive_or_negative
* @i: is int variable
*  Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);

	}
}
