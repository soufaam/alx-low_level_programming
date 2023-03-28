#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
*primeFactors -  Entrypoint
* Description: 'the program's description primeFactors
* Return: Always 0 (Success)
*/

void primeFactors(void)
{
	long int c = 2, n = 612852475143, largest = 0;

	while (n > 1)
	{
		if (n % c == 0)
		{
			if (largest < c)
				largest = c;
			n /= c;
		}
		else
			c++;
	}
	printf("%ld\n", largest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	primeFactors();
	return (0);
}
