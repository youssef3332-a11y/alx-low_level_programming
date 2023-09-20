#include "main.h"
/**
 * print_last_digit - c
 * @num: num
 * Return: c
 */
int print_last_digit(int num)
{
	int r;

	if (num < 0)
	{
		r = -(num % 10);
	}
	else
	{
		r = num % 10;
	}
	_putchar(r + '0');
	return (r);
}
