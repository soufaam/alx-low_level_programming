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
* _strcat -  Entrypoint
* Description: 'the program's description _strcat
* @dest : 1 param
* @src : 2 param
*  Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	len = _strlen(dest);
	while (*(src + i) != '\0')
	{
		*(dest + (len + i)) = *(src + i);
		i++;
	}
	*(dest + (len + i)) = '\0';
	return (dest);
}
