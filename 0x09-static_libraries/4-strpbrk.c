#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _strpbrk -  Entrypoint
* Description: 'the program's description _strpbrk
* @s : 1 param
* @accept : 2 param
*  Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	char *result, i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while ((*(accept + j)) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				result = s + i;
				return (result);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
