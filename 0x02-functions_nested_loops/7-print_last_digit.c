#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*  print_last_digit - check the code
* @n: c is char variable
* Description: 'this program  print_last_digit case '
*  Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}
