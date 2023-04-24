#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_string - ENTRYPOINT
* @str: constant
* Return: 0 success or uint
*/

void print_string(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
	}
/**
* print_all - ENTRYPOINT
* @format: constant
* @... :2 param variables
* Return: 0 success or uint
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;

	va_start(ap, format);
	while (*(format + i) != '\0')
	{
		j = 0;
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				print_string(va_arg(ap, char *));
				break;
			default:
				j = 1;
		}
		if (*(format + i + 1) != '\0' && j == 0)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
