#include "main.h"
/**
 * print_rev -r
 * @s : c
 * Return: void
 */
int _strlen(char *s);
void print_rev(char *s)
{
	char *i;

	i = s + _strlen(s) - 1;
	while (i >= s)
	{
		_putchar(*i--);
	}
	_putchar('\n');
}
