#include "main.h"
/**
 * str_concat - p
 * @s1: a
 * @s2: j
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
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
	for (int i = 0; i < len1; i++)
	{
		malo[i] = s1[i];
	}
	for (int i = 0; i <= len2; i++)
	{
		malo[i + len1] = s2[i];
	}
	return (malo);
}
