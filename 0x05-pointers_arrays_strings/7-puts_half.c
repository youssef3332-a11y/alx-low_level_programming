#include "main.h"
/**
 * puts_half - p
 * @str: str
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0, i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
	{
		j = len / 2;
		while (j < len)
		{
			_putchar(str[j++]);
		}
	}
	else
	{
		j = (len - 1) / 2 + 1;
		while (j < len)
		{
			_putchar(str[j++]);
		}
	}
	_putchar('\n');
}
