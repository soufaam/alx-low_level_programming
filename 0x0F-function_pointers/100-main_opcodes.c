#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *@argc: 1 param
 *@argv: 2 param
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
