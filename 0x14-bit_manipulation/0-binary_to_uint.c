#include "main.h"


/**
* _strlen -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int _strlen(const char *s)
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
* power -  Entrypoint
* Description: 'the program's description _strlen
* @nbr : 1 param
* @power: 2 param
*  Return: Always 0 (Success)
*/

unsigned int power(unsigned int nbr, unsigned int power)
{
	unsigned int i = 0, sum = 1;

	if (power == 0)
	{
		return (1);
	}
	for (i = 1; i <= power; i++)
	{
		sum = sum * nbr;
	}
	return (sum);
}
/**
* binary_to_uint -  Entrypoint
* Description: 'the program's description _atoi
* @b : 1 param
*  Return: Always 0 (Success)
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, lenght = 0;
	unsigned int digit = 0, number = 0;

	if (!b)
		return (0);
	lenght = _strlen(b);
	if (lenght == 0)
		return (0);
	for (i = 0; i < lenght; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		digit = b[i] - '0';
		number += digit * power(2, lenght -  i - 1);
	}
	return (number);
}
