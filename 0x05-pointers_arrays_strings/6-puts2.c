nclude "main.h"
/**
 * puts2 - puts
 * @str: pointer
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
}
