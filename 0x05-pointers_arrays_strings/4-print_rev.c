#include "main.h"
/**
 * print_rev -r
 * @s : c
 * Return: void
 */
void print_rev(char *s)
{
	char *i, *j;
	int len = 0;

	j = s;
	while (*j != '\0')
	{
		len++;
		j++;
	}
	i = s + len - 1;
	while (i >= s)
	{
		_putchar(*i--);
	}
	_putchar('\n');
}
