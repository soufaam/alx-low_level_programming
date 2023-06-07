#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _strlen_recursion -  Entrypoint
* Description: 'the program's description _strlen__recursion
* @s: 1 param
* Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
