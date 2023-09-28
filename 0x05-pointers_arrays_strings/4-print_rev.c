#include "main.h"
/**
 * print_rev -r
 * @s : c
 * Return: void
 */
void print_rev(char *s)
{
	int *i;

	i = s + _strlen(s) - 2;
	while (i != s)
	{
		_putchar(*i--);
	}
	_putchar('\n');
}
