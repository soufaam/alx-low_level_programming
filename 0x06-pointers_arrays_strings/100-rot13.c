#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* rot13  - check the code
* @s: c is char variable
* Description: 'this program rot13 case orupper
* case from a to z 10 times'
*  Return: Always 0 (Success)
*/

char *rot13(char *s)
{
	int i = 0, j;
	char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
	     *rep = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (*(s + i) != '\0')
	{	j = 0;
		while (*(rot13 + j) != '\0')
		{
			if (*(s + i) == *(rot13 + j))
			{
				*(s + i) = *(rep + j);
			}
			j++;
		}
		i++;
	}
	return (s);
}
