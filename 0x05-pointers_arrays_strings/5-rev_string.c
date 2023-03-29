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

	while (*(s + t) != '\0')
	{
		len = len + 1;
		t++;
	}
	return (len);
}

/**
* rev_string -  Entrypoint
* Description: 'the program's description rev_string
* @s : 1 param
*  Return: Always 0 (Success)
*/

void rev_string(char *s)
{
	int len, j, tmp;

	len = _strlen(s) - 1;
	for (j = 0; j <= len / 2; j++)
	{
		tmp = *(s + len - j);
		*(s + len - j) = *(s + j);
		*(s + j) = tmp;
	}
}
