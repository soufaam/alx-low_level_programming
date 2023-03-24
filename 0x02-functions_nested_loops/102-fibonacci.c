#include <stdlib.h>
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i = 1, f0 = 1, f1 = 2, fi;

	for (; i <= 50; i++)
	{
		if (i <= 2)
		{
			printf("%ld, ", i);
			continue;
		}
		fi = f0 + f1;
		f0 = f1;
		f1 = fi;
		if (i == 50)
		{
			printf("%ld\n", fi);
			continue;
		}
		printf("%ld, ", fi);
	}
	return (0);
}
