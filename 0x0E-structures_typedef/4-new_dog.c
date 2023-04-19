#include <stdlib.h>
#include <time.h>
#include "dog.h"

/**
* _strlen -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int t = 0, len = 0;

	while (*(s + t) != '\0')
	{
		len = len + 1;
		t++;
	}
	return (len);
}

/**
* _strdup -  Entrypoint
* Description: 'the program's description _strdup
* @str : 1 param
*  Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str)) + 1);
	if (s)
	{
		for (; i < _strlen(str); i++)
		{
			*(s + i) = *(str + i);
		}
	return (s);
	}
	free(s);
	return (NULL);
}


/**
* new_dog -  Entrypoint
* Description: 'the program's description new_dog
* @name : 2 param
* @age : 3 param
* @owner : 4 param
*  Return: Always 0 (Success)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
