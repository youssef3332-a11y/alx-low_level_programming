#include "main.h"
/**
 * print_square - p
 * @size: num
 * Return: void
 */
void print_square(int size)
{
	int i, j = 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			j = 1;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
