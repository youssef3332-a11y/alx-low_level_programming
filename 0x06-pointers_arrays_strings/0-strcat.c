#include "main.h"
/**
 * _strcat - p
 * @dest: n
 * @src: 2
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, n = 0;
	int len1 = 0, len2 = 0;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	while (src[j] != '\0')
	{
		len2++;
		j++;
	}
	while (n < len2)
	{
		*(dest + len1 + n) = src[n];
		n++;
	}
	return (dest);
}
