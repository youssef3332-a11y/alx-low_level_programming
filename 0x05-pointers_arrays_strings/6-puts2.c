#include "main.h"
/**
 * puts2 - puts
 * @str: pointer
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = strlen(str);
	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
