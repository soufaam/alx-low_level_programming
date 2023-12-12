#include "search_algos.h"


/**
*print_number -  Entrypoint
*Description: 'the program's description print_number
*@n : param 1
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	int size = 0, tmp, r, q, div = 1, i, min = 0;
	char c;

	tmp = n;
	if (tmp == 0)
	{
		write(1, "0", 1);
		return;
	}
	tmp /= 10;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		size = size + 1;
	}
	for (i = 0; i < size; i++)
		div *= 10;
	if (n == -2147483648)
	{
		n = (n + 1) * -1;
		min = 1;
		write(1, "-", 1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}

	while (div >= 10)
	{
		q = n / div;
		n = n - (q * div);
		c = q + '0';
		write(1, &c, 1);
		div /= 10;
	}
	r = n % 10;
	c = r + min + '0';
	write(1, &c, 1);
}

/**
* print_array -  Entrypoint
* Description: 'the program's description print_array
* @a : 1 param
* @n : 2 param
*  Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		write(1, "\n", 1);
		return;
	}
	for (; i < n - 1; i++)
	{
		print_number(*(a + i));
		write(1, ", ", 2);
	}
	print_number(*(a + i));
	write(1, "\n", 1);
}

/**
 * binary_search - Afunction to search a value in array
 * @array: Array to search in
 * @size: The size of the array
 * @value: the value to search for
 * Return: First index
*/
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (!array)
	return (-1);
	while (l <= r)
	{
		write(1, "Searching in array: ", 20);
		print_array(array + l, r - l + 1);
		m = floor(l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		return (m);
	}
	return (-1);
}
