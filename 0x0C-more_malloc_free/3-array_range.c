#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* array_range -  Entrypoint
* Description: 'the program's description array_range
* @min : 1 param
* @max: 2 param
*  Return: Always 0 (Success)
*/
int *array_range(int min, int max)
{
	int i, val;
	int *array = NULL;

	val = max - min + 1;
	if (val <= 0)
		return (NULL);
	array = malloc(val * sizeof(int));
	if (!array)
		return (NULL);
	for (i = 0; i < val; i++)
		array[i] = min + i;
	return (array);
}
