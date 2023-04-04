#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _memcpy -  Entrypoint
* Description: 'the program's description _memcpy
* @dest : 1 param
* @src : 2 param
* @n : param 3 int
*  Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
