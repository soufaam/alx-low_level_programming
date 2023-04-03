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
	int num;
	int mum;

	for (num = 0 ; num <= 98; num++)
		for (mum = num + 1; mum <= 99; mum++)
		{
			putchar('0' + num / 10);
			putchar('0' + num % 10);
			putchar(' ');
			putchar('0' + mum / 10);
			putchar('0' + mum % 10);
			if (num == 98 && mum == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	putchar ('\n');
	return (0);
}
