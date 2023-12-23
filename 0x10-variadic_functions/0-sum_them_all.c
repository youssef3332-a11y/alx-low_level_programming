#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - p
 * @n: n
 * @...: numbers
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list array;

		va_start(array, n);
		for (int i = 0; i < n; i++)
		{
			s += va_arg(array, int);
		}
		va_end(array);
	}
	return (s);
}
