#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* factorial -  Entrypoint
* Description: 'the program's description factorial
* @n: 1 param
* Return: Always 0 (Success)
*/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
		return (-1);
	return (1);
}
