#include "main.h"
/**
 * str_concat - p
 * @s1: a
 * @s2: j
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *malo;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	malo = malloc(sizeof(char) * (len1 + len2 + 1));
	if (malo == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		malo[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		malo[j + len1] = s2[j];
	}
	return (malo);
}
