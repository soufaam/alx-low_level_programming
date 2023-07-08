#include "main.h"

/**
* get_endianness - ENTRYPOINT
* Return: 0 success or uint
*/

int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;

	if (*c)
	{
		return (1);
	}
	else
		return (0);
}
