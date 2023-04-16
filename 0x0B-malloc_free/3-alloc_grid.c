#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* alloc_grid -  Entrypoint
* Description: 'the program's description _strdup
* @width : 1 param
* @height: 2 param
*  Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(*array) * width);
	if (array)
	{
		for (i = 0; i < width; i++)
			array[i]  = malloc(sizeof(*array[i]) * height);
		for (i = 0; i < width; i++)
		{
			if (array[i])
			{
				for (j = 0; j < height; j++)
				{
					array[i][j] = 0;
				}
			}
		}
		return (array);
	}
	free(array);
	return (NULL);
}
