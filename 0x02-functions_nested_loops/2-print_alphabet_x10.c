#include "main.h"
/**
 * print_alphabet_x10 - h
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
