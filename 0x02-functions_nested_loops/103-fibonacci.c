#include <stdio.h>
/**
 * main - main
 *
 *Return: 0
 */
int main(void)
{
	long int sum = 2, u2, u1 = 2, u = 1;

	printf("%ld, %ld", u, u1);
	while (u2  <= 4000000)
	{
		u2 = u1 + u;
		printf(", %ld", u2);
		u = u1;
		u1 = u2;
		if ((u2 % 2) == 0)
		{
			sum += u2;
		}
	}
	printf("\n");
	return (0);
}
