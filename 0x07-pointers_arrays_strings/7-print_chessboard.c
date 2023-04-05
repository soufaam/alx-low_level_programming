#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* print_chessboard -  Entrypoint
* Description: 'the program's description print_chessboard
* @a : 1 param
* Return: Always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(*(*(a + i) + j));
			j++;
		}
		_putchar('\n');
		i++;
	}
	return;
}
