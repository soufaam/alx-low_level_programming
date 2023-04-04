#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _strstr -  Entrypoint
* Description: 'the program's description _strstr
* @haystack : 1 param
* @needle : 2 param
*  Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = NULL;
	int i = 0, j = 0;

	if (*needle == "")
		return (NULL);
	while (*(needle + i) != '\0')
	{
		while ((*(haystack + j)) != '\0')
		{
			if (*(haystack + j) == *(needle + i))
			{
				if (result == NULL)
				{
					result = haystack + j;
					j++;
					break;
				}
				else
				{
					j++;
					break;
				}
			}
			else
			{
				j++;
				result = NULL;
				break;
			}
		}
		if (result == NULL)
		{
			i = 0;
			if (*(haystack + j) == '\0')
				break;
			continue;
		}
		i++;
	}
	return (result);
}
