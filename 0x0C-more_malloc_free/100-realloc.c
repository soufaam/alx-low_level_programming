#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _realloc -  Entrypoint
* Description: 'the program's description array_range
* @ptr: 1 param
* @old_size: 2 param
* @new_size: 3 param
*  Return: Always 0 (Success)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	size_t *newptr = NULL;
	size_t *oldptr = NULL;
	unsigned int i, current_size;

	oldptr = ptr;
	current_size = old_size ? old_size > new_size : new_size;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr)
			return (ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	for (i = 0; i < current_size; i++)
		newptr[i] =  oldptr[i];
	if (newptr)
	{
		free(ptr);
		return (newptr);
	}
	return (NULL);
}
