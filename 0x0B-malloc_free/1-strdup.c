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
	int len, i = 0;

	len = strlen(str);
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
