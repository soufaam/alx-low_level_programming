#include <stdlib.h>
#include <time.h>
#include "dog.h"

/**
* free_dog -  Entrypoint
* Description: 'the program's description print_dog
* @d : 1 param
*  Return: Always 0 (Success)
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->owner != NULL)
	{
		free(d->owner);
	}
	if (d->name != NULL)
	{
		free(d->name);
	}
	free(d);
}
