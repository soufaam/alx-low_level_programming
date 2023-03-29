#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* puts2 -  Entrypoint
* Description: 'the program's description 2puts2
* @str : 1 param
*  Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int t = 0;

	while (*(str + t) != '\0')
	{
		if (t % 2 == 0)
		{
			_putchar(*(str + t));
		}
		t++;
	}
	_putchar('\n');
}
