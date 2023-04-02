#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* leet  - check the code
* @s: c is char variable
* Description: 'this program leet case orupper
* case from a to z 10 times'
*  Return: Always 0 (Success)
*/

char *leet(char *s)
{
	int i = 0, j;
	char *elit = "aeotl", *rep = "43071";


	while (*(s + i) != '\0')
	{	j = 0;
		while (*(elit + j) != '\0')
		{
			if (*(s + i) == *(elit + j) || *(s + i) == *(elit + j) - 32)
			{
				*(s + i) = *(rep + j);
			}
			j++;
		}
		i++;
	}
	return (s);
}
