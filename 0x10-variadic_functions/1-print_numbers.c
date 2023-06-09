#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - ENTRYPOINT
* @separator : constant
* @n :2 param
* @...: unlimited args
* Return: 0 success or uint
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i < (n - 1))
			printf("%d%s", va_arg(ap, int), separator);
		else
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
