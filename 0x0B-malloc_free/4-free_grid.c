#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* free_grid -  Entrypoint
* Description: 'the program's description free_grid
* @grid : 1 param
* @height: 2 param
*  Return: Always 0 (Success)
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
