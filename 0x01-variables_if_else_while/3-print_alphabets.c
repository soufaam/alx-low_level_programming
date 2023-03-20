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
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53; i++)
		putchar(alpha[i]);

	putchar ('\n');
	return (0);
}
