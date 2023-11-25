#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_num(char *str);
/**
 * main - m
 * @argc: c
 * @argv:cv
 * Return:int
 */
int main(int argc, char **argv)
{
	int s = 0;

	while (--argc)
	{
		if (is_num(*++argv) == 1)
		{
			printf("Error\n");
			return (1);
		}
		s += atoi(*argv);
	}
	printf("%d\n", s);
	return (0);
}
/**
 * is_num - n
 * @str:c
 * Return: int
 */
int is_num(char *str)
{
	size_t i;

	if (strlen(str) == 0)
	{
		return (0);
	}
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}
