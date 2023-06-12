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

	if (s == NULL)
		return (len);
	while (*(s + t) != '\0')
	{
		len = len + 1;
		t++;
	}
	return (len);
}

/**
* str_concat -  Entrypoint
* Description: 'the program's description str_concat
* @s1 : 1 param
* @s2 : 1 param
*  Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (s)
	{
		if (s1 != NULL)
		{
			while (*(s1 + i) != '\0')
			{
				*(s + i) = *(s1 + i);
				i++;
			}
		}
		if (s2 != NULL)
		{
			while (*(s2 + j) != '\0')
			{
				*(s + i) = *(s2 + j);
				i++;
				j++;
			}
		}
		*(s + i) = '\0';
		return (s);
	}
	free(s);
	return (NULL);
	}
