#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size : pointer function
 * @action : function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array)
		for (; i < size; i++)
			action(array[i]);
}
