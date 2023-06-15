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
* string_nconcat -  Entrypoint
* Description: 'the program's description string_nconcat
* @s1 : 1 param
* @s2 : 2 param
* @n : 3 param
*  Return: Always 0 (Success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, m = 0, len = 0;

	len = (unsigned int)_strlen(s2);
	if (n >  len)
		m = len;
	else
		m = n;
	s = malloc(sizeof(char) * (_strlen(s1) + m) + 1);
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
			while (j < m)
			{
				*(s + i) = *(s2 + j);
				i++;
				j++;
			}
		}
		*(s + i) = '\0';
		return (s);
	}
	return (NULL);
	}
