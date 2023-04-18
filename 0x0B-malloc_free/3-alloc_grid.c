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
	array = (int **)malloc(height * sizeof(int *));
	if (array)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(width * sizeof(int));
			if (array[i] == NULL && i != 0)
			{
				while (i >= 0)
					free(array[i--]);
				free (array);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				array[i][j] = 0;
	}
	return (array);
}
