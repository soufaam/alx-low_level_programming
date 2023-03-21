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
	int mum;

	for (; num < 9; num++)
		for (mum = num + 1; mum <= 9; mum++)
		{
			putchar('0' + num);
			putchar('0' + mum);
			if (num < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar ('\n');
	return (0);
}
