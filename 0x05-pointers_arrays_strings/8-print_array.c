#include "main.h"
#include <stdio.h>
/**
 * print_array - p
 * @a: a
 * @n: n
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[n - 1]);
			break;
		}
		printf("%d, ", a[i++]);
	}
}
