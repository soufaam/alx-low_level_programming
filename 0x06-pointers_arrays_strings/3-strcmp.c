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
* _strcmp -  Entrypoint
* Description: 'the program's description _strcmp
* @s1 : 1 param
* @s2 : 2 param
*  Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (len1 == len2)
		return (0);
	else if (len1 > len2)
		return (15);
	else
		return (-15);
}
