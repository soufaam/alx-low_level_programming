#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Description: 'the program's description
*  Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	for (; num <= 15; num++)
		if (num <= 9)
			putchar('0' + num);
		else
			putchar('0' + 39 + num);

	putchar ('\n');
	return (0);
}
