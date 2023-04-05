#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_diagsums -  Entrypoint
* Description: 'the program's description print_diagsums
* @a : 1 param
* @size: 2 param
* Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0, index1, index2;

	index1 = 0;
	index2 = size - 1;
	while (i < size)
	{
		sum1 = sum1 + *(a + index1);
		sum2 = sum2 + *(a + index2);
		index1 = index1 + (size + 1);
		index2 = index2 + (size - 1);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
