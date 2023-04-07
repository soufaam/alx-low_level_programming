#include <stdlib.h>
#include <time.h>
#include "main.h"

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
* _strncat -  Entrypoint
* Description: 'the program's description _strncat
* @dest : 1 param
* @src : 2 param
* @n : 3 param
*  Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len;

	len = _strlen(dest);
	while ((*(src + i) != '\0') && i < n)
	{
		*(dest + (len + i)) = *(src + i);
		i++;
	}
	*(dest + (len + i)) = '\0';
	return (dest);
}
