#include <stdio.h>
/**
 * main - main
 *
 *Return: 0
 */
int main(void)
{
	long int i = 1, u2, u1 = 2, u = 1;

	printf("%d, %d", u, u1);
	while (i < 49)
	{
		u2 = u1 + u;
		printf(", %ld", u2);
		u = u1;
		u1 = u2;
		i++;
	}
	printf("\n");
	return (0);
}
