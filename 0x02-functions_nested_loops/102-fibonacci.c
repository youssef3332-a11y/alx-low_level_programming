#include <stdio.h>
/**
 * main - main
 *
 *Return: void
 */
void main(void)
{
	int i = 1, u2, u1 = 2, u = 1;

	printf("%d, %d", u, u1);
	while (i < 49)
	{
		u2 = u1 + u;
		printf(", %d", u2);
		u = u1;
		u1 = u2;
		i++;
	}
	printf("\n");
}
