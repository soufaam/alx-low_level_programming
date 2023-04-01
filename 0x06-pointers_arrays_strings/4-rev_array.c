#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* reverse_array -  Entrypoint
* Description: 'the program's description reverse_array
* @a : 1 param
* @n : int value
*  Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{
	int j, tmp;

	if (n == 0)
		return;
	for (j = 0; j <= n / 2; j++)
	{
		tmp = *(a + n - 1 - j);
		*(a + n - 1 - j) = *(a + j);
		*(a + j) = tmp;
	}
}
