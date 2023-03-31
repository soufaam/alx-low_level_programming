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
	int i = 0, j = 0;
	char *ptr, *strtmp = dest, *strtmp2 = src;

	ptr = malloc(sizeof(char) * (_strlen(dest) +  _strlen(src) + 1));
	while (*(strtmp + i) != '\0')
	{
		*(ptr + i) = *(strtmp + i);
		i++;
	}
	while (*(strtmp2 + j) != '\0')
	{
		*(ptr + i) = *(strtmp2 + j);
		i++;
		j++;
	}
	return (ptr);
}
