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
	int i;

	for (i = 0; i < 27; i++)
		if (alpha[i] != 'q' || alpha[i] != 'e')
		putchar(alpha[i]);

	putchar ('\n');
	return (0);
}
