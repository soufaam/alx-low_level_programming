#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* malloc_checked -  Entrypoint
* Description: 'the program's description _strdup
* @b: 1 param
* Return: Always 0 (Success)
*/
void *malloc_checked(unsigned int b)
{
	void *var;

	var = malloc(b);
	if (!var)
		exit(98);
	return (var);
}
