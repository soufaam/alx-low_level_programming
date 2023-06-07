#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* calculate_prime -  Entrypoint
* Description: 'the program's description int calculate_prime
* @n: 1 param
* @y: 2 param
* Return: Always 0 (Success)
*/
int calculate_prime(int n, int y)
{
	if (n == -1 || n == 1)
		return (0);
	if (n % y != 0)
		return (calculate_prime(n, y + 1));
	if (y == n)
		return (1);
	if (n % y == 0)
		return (0);
	return (1);
}
/**
* is_prime_number-  Entrypoint
* Description: 'the program's description int is_prim_number
* @n: 1 param
* Return: Always 0 (Success)
*/

int is_prime_number(int n)
{
	return (calculate_prime(n, 2));
}
