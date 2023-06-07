#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _puts_recursion -  Entrypoint
* Description: 'the program's description _puts_recursion
* @s: 1 param
* Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}
