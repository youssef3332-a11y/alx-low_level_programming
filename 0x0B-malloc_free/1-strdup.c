#include "main.h"
/**
 * _strdup - p
 * @str: k
 * Return: pointer
 */
char *_strdup(char *str)
{
	int len = strlen(str), i = 0;
	char *n = malloc(sizeof(char) * (len + 1));

	if (len == 0 || n == NULL)
	{
		return (NULL);
	}
	while (i <= len)
	{
		n[i] = str[i];
		i++;
	}
	return (n);
}
