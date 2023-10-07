#include "main.h"
/**
 * _atoi - p
 * @s: s
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, len = 0, c = 1, n = 0;

	while (s[i] != '\0')
	{
		len++;
	}
	len -= 1;
	while (len >= 0)
	{
		if (s[len] == '-')
		{
			n *= (-1);
		}
		else if (s[len] >= '0' && s[len] <= '9')
		{
			n += c * (s[len] - '0');
			c *= 10;
		}
		else
		{
			continue;
		}
		len--;
	}
	return (n);
}
