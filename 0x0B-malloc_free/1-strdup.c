#include "main.h"
/**
 * _strdup - p
 * @str: k
 * Return: pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int len = strlen(str), i = 0;
	char *n = malloc(sizeof(char) * (len + 1));

	if (n == NULL)
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
