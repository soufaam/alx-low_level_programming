#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* wildcmp -  Entrypoint
* Description: 'the program's description for int is_palindrome function
* @s1: 1 param
*@s2: 2 param
* Return: Always 0 (Success)
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	if (*s1 == '*' || *s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (wildcmp(s1 + 1, s2 + 1));
}
