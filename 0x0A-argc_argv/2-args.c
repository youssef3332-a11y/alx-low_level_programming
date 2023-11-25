#include <stdio.h>
/**
 * main - m
 * @argc:c
 * @argv:v
 * Return:viod
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
}
