#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* cap_string  - check the code
* @s: c is char variable
* Description: 'this program cap_string case orupper
* case from a to z 10 times'
*  Return: Always 0 (Success)
*/

char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((i == 0) && *(s + i) <= 122 && *(s + i) >= 97)
		{
			*(s + i) = *(s  + i) - 32;
		}
		if ((*(s + i) == ' ') || (*(s + i) == '\t') || (*(s + i) == '\n') ||
			(*(s + i) == ',') || (*(s + i) == ';') ||
			(*(s + i) == '.') || (*(s + i) == '!') ||
			(*(s + i) == '?') || (*(s + i) == '"') ||
			(*(s + i) == '(') || (*(s + i) == '{')
			|| (*(s + i) == '}'))
		{
			if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
		i++;
	}
	return (s);
}
