#include "main.h"
/**
 * _isdigit - is digit
 * @c: c
 * Return: 1
 */
int _isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
	{
		return (1);
	}
	return (0);
}
