#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _print_rev_recursion -  Entrypoint
* Description: 'the program's description _print_rev_recursion
* @s: 1 param
* Return: Always 0 (Success)
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
