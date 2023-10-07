#include "main.h"
/**
 * _atoi - p
 * @s: s
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, len = 0, n = 0, f = 1;
	long int c = 1;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	len -= 1;
	while (len >= 0)
	{
		if (s[len] == '-')
		{
			f *= (-1);
			len--;
		}
		else if (s[len] >= '0' && s[len] <= '9')
		{
			n += c * (s[len] - '0');
			c *= 10;
			len--;
		}
		else
		{
			len--;
			continue;
		}
	}
	n *= f;
	return (n);
}
