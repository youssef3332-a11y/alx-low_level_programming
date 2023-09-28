#include "main.h"
/*
 * swap_int - p
 * @a: a
 * @b: b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
