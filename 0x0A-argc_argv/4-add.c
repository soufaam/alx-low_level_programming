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
	int sum = 0, i, j;

	if (argc <= 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
		printf("%d\n", sum);
	return (0);
}
