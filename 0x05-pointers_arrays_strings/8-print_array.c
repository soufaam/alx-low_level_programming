#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <stdio.h>

/**
* print_array -  Entrypoint
* Description: 'the program's description print_array
* @a : 1 param
* @n : 2 param
*  Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
	}
	for (; i < n - 1; i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + i));
}
