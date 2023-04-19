#include <stdlib.h>
#include <time.h>
#include "dog.h"

/**
* init_dog -  Entrypoint
* Description: 'the program's description str_concat
* @d : 1 param
* @name : 2 param
* @float : 3 param 
* @owner : 4 param
*  Return: Always 0 (Success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->owner = owner;
	d->name = name;
}
