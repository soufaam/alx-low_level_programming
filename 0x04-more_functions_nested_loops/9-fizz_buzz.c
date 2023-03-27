#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* fizzbuzz -  Entrypoint
* Description: 'the program's description fizzbuzz
* Return: Always 0 (Success)
*/

void fizzbuzz(void)
{
	int nbr;

	for (nbr = 1; nbr <= 100; nbr++)
	{
		if (nbr % 5 == 0 && nbr % 3 == 0 && nbr != 100)
			printf("fizzbuzz ");
		else if (nbr % 5 == 0)
			printf("buzz ");
		else if (nbr % 3 == 0)
			printf("fizz ");
		else if (nbr == 100)
			printf("fizzbuzz");
		else
			printf("%d ", nbr);
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
