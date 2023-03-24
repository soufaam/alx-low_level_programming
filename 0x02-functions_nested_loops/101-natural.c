#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_natural - check the code
* Description: 'this program print_natural'
*  Return: Always 0 (Success)
*/

void print_natural(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
			printf("%d, ", i);
		}
	}
	printf("%d", sum);
	printf("\n");
}
