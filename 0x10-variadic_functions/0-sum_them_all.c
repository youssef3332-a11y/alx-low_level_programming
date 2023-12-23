#include <stdio.h>
#include <stdarg.h>
/*#include "variadic_functions.h"*/
/**
 * sum_them_all - p
 * @n: n
 * @...: numbers
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list array;

	if (n == 0)
		return (0);
	va_start(array, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(array, int);
	}
	va_end(array);
	return (s);
}
