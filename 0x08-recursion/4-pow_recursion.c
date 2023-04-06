#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* int _pow_recursion-  Entrypoint
* Description: 'the program's description int _pow_recursion
* @x: 1 param
* @y: 2 param
* Return: Always 0 (Success)
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (1);
	return (-1);
}
