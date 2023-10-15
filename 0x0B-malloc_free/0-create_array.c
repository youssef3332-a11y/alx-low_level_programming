#include "main.h"
/**
 * create_array - p
 * @size:s
 * @c:c
 * Return:pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		str[size] = c;
	}
	return (str);
}
