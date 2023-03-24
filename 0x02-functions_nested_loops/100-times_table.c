#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_q0 - check the code
* Description: 'this program  print_q0'
* * @j: j int j
* @n: int n
* @r: int r
* @next_p: int next_p
*  Return: Always 0 (Success)
*/
void print_q0(int j, int n, int r, int next_p)
{
	_putchar(r + '0');
	if (j != n)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		if (next_p / 10 == 0)
			_putchar(' ');
	}
}

/**
* print_nq - check the code
* @j: j int j
* @q: int q
* @n: int n
* @r: int r
* @next_p: int next_p
* Description: 'this program  print_nq'
* Return: Always 0 (Success)
*/
void print_nq(int j, int q, int n, int r, int next_p)
{
	_putchar(q + '0');
	_putchar(r + '0');
	if (j != n)
	{
		_putchar(',');
		_putchar(' ');
		if (next_p / 100 == 0)
			_putchar(' ');
	}
}
/**
* print_times_table - check the code
* @n: int v
* Description: 'this program  print_times_table'
*  Return: Always 0 (Success)
*/
void print_times_table(int n)
{
	int i, j, r, q, p, t, next_p;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = j * i;
			t = p / 100;
			q = p % 100;
			r = q % 10;
			q = q / 10;
			next_p = i * (j + 1);
			if (t == 0)
			{
				if (q == 0)
					print_q0(j, n, r, next_p);
				else
					print_nq(j, q, n, r, next_p);
			}
			else
			{
				_putchar(t + '0');
				_putchar(q + '0');
				_putchar(r + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
