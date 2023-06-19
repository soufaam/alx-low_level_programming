#include <stdlib.h>
#include <time.h>
#include "dog.h"

/**
* print_dog -  Entrypoint
* Description: 'the program's description print_dog
* @d : 1 param
*  Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
