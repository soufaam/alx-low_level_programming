#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_sign  - check the code
* @n: c is char variable
* Description: 'this program _islower case orupper case from a to z 10 times'
*  Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
