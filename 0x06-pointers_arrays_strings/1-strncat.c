#include "main.h"
/**
 * _strncat - p
 * @dest: n
 * @src: 2
 * @n: b
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, f = 0;
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
	if (len2 > n)
	{
		len2 = n;
	}
	while (f < len2)
	{
		*(dest + len1 + f) = src[f];
		f++;
	}
	return (dest);
}
