#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* calculate_sqrt_root -  Entrypoint
* Description: 'the program's description int calculate_sqrt_root
* @n: 1 param
* @y: 2 param
* Return: Always 0 (Success)
*/
int calculate_sqrt_root(int n, int y)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	if (y * y < n)
		return (calculate_sqrt_root(n, y + 1));
	if (y * y == n)
		return (y);
	if (y > n || (y * y) > n)
		return (-1);
	return (1);
}
/**
* _sqrt_recursion-  Entrypoint
* Description: 'the program's description int _sqrt_recursion
* @n: 1 param
* Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)
{
	return (calculate_sqrt_root(n, 1));
}
