#include "3-calc.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc,char **argv)
{
	int a, b;
	char *s;
	int (*f)(int , int );
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if ((s[0] == '/' || s[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(s);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (*f)(a,b));
	return (0);
}
