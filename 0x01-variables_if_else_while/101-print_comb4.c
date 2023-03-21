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
	int mun = 0;

	for (; mun < 8; mun++)
	{
		for (num = mun + 1; num < 9; num++)
			for (mum = num + 1; mum <= 9; mum++)
			{
				putchar('0' + mun);
				putchar('0' + num);
				putchar('0' + mum);
				if (mun < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar ('\n');
	return (0);
}
