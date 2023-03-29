#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <stdio.h>

/**
* _strlen -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int t = 0, len = 0;

	while (*(s + t) != '\0')
	{
		len = len + 1;
		t++;
	}
	return (len);
}

/**
* puts_half -  Entrypoint
* Description: 'the program's description puts_half
* @str : 1 param
*  Return: Always 0 (Success)
*/

void puts_half(char *str)
{
	int n, len;

	len = _strlen(str);
	n = len / 2;
	if (len % 2 != 0)
		n = n + 2;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
