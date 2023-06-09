#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _memset -  Entrypoint
* Description: 'the program's description _memset
* @s : 1 param
* @b : 2 param
* @n : param 3 int
*  Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
