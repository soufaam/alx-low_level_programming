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
 * linear_search - Afunction to search a value in array
 * @array: Array to search in
 * @size: The size of the array
 * @value: the value to search for
 * Return: First index
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		write(1, "Value checked array[", _strlen("Value checked array["));
		print_number(i);
		write(1, "] = [", _strlen("] = ["));
		print_number(array[i]);
		write(1, "]\n", _strlen("]\n"));
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
