#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _puts -  Entrypoint
* Description: 'the program's description _puts
* @str : 1 param
*  Return: Always 0 (Success)
*/

void _puts(char *str)
{
	int t = 0;

	while (*(str + t) != '\0')
	{
		_putchar(*(str + t));
		t++;
	}
	_putchar('\n');
}
