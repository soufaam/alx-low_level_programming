#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for
 *@argc: 1 param
 *@argv: 2 param
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int val1, val2, prod;

	if (argc <= 3)
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		if (val1 != 0 && val2 != 0)
		{
			prod = val1 * val2;
			printf("%d\n", prod);
		}
	return (0);
	}
	printf("Error\n");
	return (98);
}
