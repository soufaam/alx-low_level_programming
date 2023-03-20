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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i; i < 27; i++)
		putchar(alpha[i]);

	putchar ('\n');
	return (0);
}
