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
 * min- A function that returns the minimum
 * @a: int var
 * @b: int vat
 * Return: return the minimum
*/
size_t min(int a, int b)
{
	if (a > b)
	return (b);
	else
	return (a);
}
/**
 * write_checked - write formatted
 * @index: index of array
 * @array: the array
 * Return: none
*/
void write_checked(int index, int *array)
{
			write(1, "Value checked array[", 20);
		print_number(index);
		write(1, "] = [", 5);
		print_number(array[index]);
		write(1, "]\n", _strlen("]\n"));

}
/**
 * jump_search - A function to search a value in array
 * @array: Array to search in
 * @size: The size of the array
 * @value: the value to search for
 * Return: First index
*/

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0, start, end, index = 0;

	if (array == NULL || size == 0)
		return (-1);
	write_checked(prev, array);
	while (array[prev] < value)
	{
		prev += step;
		if (prev >= (int)size)
			break;
		write_checked(prev, array);
	}
	start = prev - step;
	end = prev;
	write(1, "Value found between indexes [", 29);
	print_number(start);
	write(1, "] and [", 7);
	print_number(end);
	write(1, "]\n", 2);
	for ( index = start; index <= end && index < (int)size; index++)
	{
		write_checked(index, array);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
