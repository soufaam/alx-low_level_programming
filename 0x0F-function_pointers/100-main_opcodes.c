#include <stdlib.h>
#include <stdio.h>

/**
 * printOpcodes - check the code
 *@start: 1 param
 *@numBytes: 2 param
 * Return: Always 0.
 */
void printOpcodes(const char *start, int numBytes)
{
	int i;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x ", start[i] & 0xFF);
	}
	printf("\n");
}

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
	byte = atoi(argv[1]);
	void *func_main = (void *)&main;

	printOpcodes((char *)func_main, byte);
	return (0);
}
