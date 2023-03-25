#include <stdlib.h>
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int fi, f0 = 1, f1 = 2, sum = 2;

	fi = f0 + f1;
	while (fi <= 4000000)
	{
		f0 = f1;
		f1 = fi;
		if (fi % 2 == 0)
			sum = sum + fi;
		fi = f0 + f1;
	}
	printf("%d\n", sum);
	return (0);
}
