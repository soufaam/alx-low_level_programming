#include <stdio.h>
#include <stdlib.h>

/**
 * cal_recursive - check the code
 *@m: first param
 *@coin: 2 param
 * Return: Always int value.
 */
int cal_recursive(int m, int coin)
{
	if (m - coin < 0 || m / coin == 0)
		return (0);
	return (m / coin);
}

/**
 * main - check the code
 *@argc: first param
 *@argv: 2 param
 * Return: Always 0.
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int __attribute__ ((unused)) m, count, sum = 0, i = 0;
	int coinTab[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	printf("%d \n", m);
	for (; i < 5; i++)
	{
		count = cal_recursive(m, coinTab[i]);
		m = m - (count * coinTab[i]);
		sum = sum + count;
	}
	printf("%d\n", sum);
	return (0);
}
