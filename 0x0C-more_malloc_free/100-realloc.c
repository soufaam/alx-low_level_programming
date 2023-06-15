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
	unsigned int i;

	oldptr = ptr;
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
	if (new_size > old_size && ptr)
	{
		newptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
			newptr[i] =  oldptr[i];
		if (newptr)
			return (newptr);
		free(ptr);
		return (NULL);
	}
	return (NULL);
}
