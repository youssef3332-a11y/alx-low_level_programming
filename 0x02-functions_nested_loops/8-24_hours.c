#include "main.h"
/**
 * jack_bauer - l
 *
 * Return: void
 */
void jack_bauer(void)
{
	int dh, uh, h, m, dm, um;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m < 60; m++)
		{
			dh = h / 10;
			uh = h % 10;
			dm = m / 10;
			um = m % 10;
			_putchar(dh + '0');
			_putchar(uh + '0');
			_putchar(':');
			_putchar(dm + '0');
			_putchar(um + '0');
			_putchar('\n');
		}
	}
}
