#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *@argc: first param
 *@argv: 2 param
 * Return: Always 0.
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int __attribute__ ((unused)) a, __attribute__ ((unused)) b;

	if (argc <= 1)
	{
		printf("error\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
	return (0);
}
