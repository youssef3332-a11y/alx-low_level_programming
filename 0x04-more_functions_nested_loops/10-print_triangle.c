#include "main.h"
/**
 * print_triangle - p
 * @size: num
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, n, m;

	n = size - 1;
	m = 1;
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= m; k++)
			{
				_putchar('#');
			}
			n--;
			m++;
			if (i != size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
