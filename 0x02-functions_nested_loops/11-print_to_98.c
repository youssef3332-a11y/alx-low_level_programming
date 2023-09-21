#include "main.h"
/**
 * print_to_98 - to 98
 * @n: the start
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n++);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n--);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
}
