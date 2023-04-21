#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: name of the person
 * @size : pointer function
 * @cmp : function pointer
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0)
		return (-1);
	if (cmp && array)
		for (; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
	
}
