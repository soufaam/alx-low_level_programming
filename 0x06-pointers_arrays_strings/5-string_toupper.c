#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* string_toupper  - check the code
* @s: c is char variable
* Description: 'this program string_toupper case orupper
* case from a to z 10 times'
*  Return: Always 0 (Success)
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) <= 122 && *(s + i) >= 97)
		{
			*(s + i) = *(s  + i) - 32;
		}
		i++;
	}
	return (s);
}
