#include <stdio.h>
/**
 * main - main
 *
 *Return: 0
 */
int main(void)
{
	unsigned long i = 1, u2, u1 = 2, u = 1;

	printf("%lu, %lu", u, u1);
	while (i < 97)
	{
		u2 = u1 + u;
		printf(", %lu", u2);
		u = u1;
		u1 = u2;
		i++;
	}
	printf("\n");
	return (0);
}
