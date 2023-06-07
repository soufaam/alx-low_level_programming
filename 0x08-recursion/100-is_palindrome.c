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

/**
* cmpstr -  Entrypoint
* Description: 'the program's description _strlen__recursion
* @str: 1 param
* @len: second param
* @len2: third param
* Return: Always 0 (Success)
*/
int cmpstr(char *str, int len, int len2)
{
	if (len == len2)
		return (0);

	if (str[len] != str[len2])
		return (1);

	if (len < len2 + 1)
		return (cmpstr(str, len + 1, len2 - 1));
	return (0);
}
/**
* is_palindrome -  Entrypoint
* Description: 'the program's description for int is_palindrome function
* @s: 1 param
* Return: Always 0 (Success)
*/

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
	{
		return (0);
	}
	if (len % 2 == 0)
	{
		return (1);
	}
	return (cmpstr(s, 0, len - 1));
}
