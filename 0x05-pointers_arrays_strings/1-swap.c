#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* swap_int -  Entrypoint
* Description: 'the program's description swap_int
* @a : 1 param
* @b : 2 param
*  Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
