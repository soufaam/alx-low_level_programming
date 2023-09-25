#include "sort.h"

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 1;
	size_t tmp;
	int swap = 1;

	while (swap)
	{
		swap = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
	}
}
