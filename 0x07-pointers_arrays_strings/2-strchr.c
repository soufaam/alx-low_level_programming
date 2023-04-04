#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _strchr -  Entrypoint
* Description: 'the program's description _strchar
* @s : 1 param
* @c : 2 param
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
