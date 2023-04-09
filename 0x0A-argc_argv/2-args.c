#include <stdio.h>

/**
 * main - check the code
 *@argc: first param
 *@argv: 2 param
 * Return: Always 0.
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
