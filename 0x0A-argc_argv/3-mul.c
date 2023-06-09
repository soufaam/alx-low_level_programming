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
	int __attribute__ ((unused)) result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
