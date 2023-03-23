#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_less_98 - check the code
* Description: 'this program  print_less_98'
* @l: n is int variable
*  Return: Alrays 0 (Success)
*/
void print_less_98(int l)
{
	int j;

	for (j = l; j <= 98; j++)
	{
		if (j == 98)
		{
			printf("%d", j);
			break;
		}
		printf("%d, ", j);
	}
	printf("\n");
}

/**
* print_greater_98 - check the code
* Description: 'this program  print_greater_98 print numbr from to 98'
* @h: h is int variable
*  Return: Alrays 0 (Success)
*/
void print_greater_98(int h)
{
	int j;

	for (j = h; j >= 98; j--)
	{
		if (j == 98)
		{
			printf("%d", j);
			break;
		}
		printf("%d, ", j);
	}
	printf("\n");
}

/**
* print_to_98 - check the code
* Description: 'this program  print_to_98'
* @n: n is int variable
*  Return: Alrays 0 (Success)
*/

void print_to_98(int n)
{
	if (n < 98)
		print_less_98(n);
	else if (n > 98)
		print_greater_98(n);
	else
		printf("%d\n", n);
}
