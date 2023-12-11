#include <stdio.h>
/**
 * array_iterator - p
 * @array: a
 * @size: p
 * @action: p
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
