#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

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
* _strdup -  Entrypoint
* Description: 'the program's description _strdup
* @str : 1 param
*  Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str)) + 1);
	if (s)
	{
		for (; i < _strlen(str); i++)
		{
			*(s + i) = *(str + i);
		}
	return (s);
	}
	return (NULL);
}
/**
* print_strings - ENTRYPOINT
* @separator : constant
* @n :2 param
* @...: unlimited args
* Return: 0 success or uint
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char **str;
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	str = malloc(sizeof(char *) * n);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str[i] = _strdup(va_arg(ap, char *));
		if (str[i])
		{
			printf("%s", str[i]);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
	for (i = 0; i < n; i++)
		free(str[i]);
	free(str);
}
