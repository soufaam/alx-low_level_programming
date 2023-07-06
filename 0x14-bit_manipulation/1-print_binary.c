#include "main.h"

/**
* print_binary - ENTRYPOINT
* @n: constant
* Return: 0 success or uint
*/
void print_binary(unsigned long int n)
{
	char ch;

	if (n / 2)
		print_binary(n / 2);
	ch = n % 2 + '0';
	_putchar(ch);
}
