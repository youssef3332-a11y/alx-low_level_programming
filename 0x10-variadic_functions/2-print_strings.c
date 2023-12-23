#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - p
 * @separator: s
 * @n:n
 * @...: .
 * Return: viod
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list array;
	char *str;

	va_start(array, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		str = va_arg(array, char *);
		if (str == NULL)
			printf("%s", "(nil)");
		printf("%s", str);
	}
	va_end(array);
	printf("\n");
}
