#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _strspn -  Entrypoint
* Description: 'the program's description _strspn
* @s : 1 param
* @accept : 2 param
*  Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0, i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while ((*(accept + j)) != '\0')
		{
			if (*(accept + j) == *(s + i))
				result = result + 1;
			j++;
		}
		if (result == i)
			break;
		i++;
	}
	return (result);
}
