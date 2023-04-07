#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _strcpy -  Entrypoint
* Description: 'the program's description _strcpy
* @dest : 1 param
* @src : 2 param
*  Return: Always 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
	int t = 0;

	while (*(src + t) != '\0')
	{
		*(dest + t) = *(src + t);
		t++;
	}
	*(dest + t) = '\0';
	return (dest);
}
