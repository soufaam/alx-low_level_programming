#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* create_array -  Entrypoint
* Description: 'the program's description create_array
* @size : 1 param
* @c: 2 param
*  Return: Always 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array)
	{
		for (; i < size; i++)
		{
			*(array + i) = c;
		}
	return (array);
	}
	free(array);
	return (NULL);
}
