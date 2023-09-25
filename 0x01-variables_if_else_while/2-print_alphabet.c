#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= (int)'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
