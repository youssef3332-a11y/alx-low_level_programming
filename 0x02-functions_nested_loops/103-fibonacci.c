#include <stdio.h>
/**
 * main - main
 *
 *Return: 0
 */
int main(void)
{
	long int sum = 2, u2, u1 = 2, u = 1;

	while (u2  <= 4000000)
	{
		u2 = u1 + u;
		u = u1;
		u1 = u2;
		if ((u2 % 2) == 0)
		{
			sum += u2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
