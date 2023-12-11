#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - p
 * @array: a
 * @size: p
 * @action: p
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
