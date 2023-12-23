#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers- p
 * @separator: s
 * @n: n
 * @...: n
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list array;

	va_start(array, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(array, int));
	}
	va_end(array);
	printf("\n");
}

