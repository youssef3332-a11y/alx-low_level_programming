#include "main.h"
/**
 * print_to_98 - to 98
 * @n: the start
 * Return: void
 */
void print_to_98(int n)
{
	int i, j, n;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
}
