#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
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
	char *a;
	unsigned int nmemb;
	unsigned int i;

	nmemb = 402;
	a = _calloc(nmemb, sizeof(*a));
	if (a == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	for (i = 0; i < nmemb; ++i)
		a[i] = 98;
	simple_print_buffer(a, nmemb);
	free(a);
	return (0);
}
