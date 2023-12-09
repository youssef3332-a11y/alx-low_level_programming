#include <stdio.h>
#include "dog.h"
/**
 * print_dog - p
 * @d: p
 * Return:void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("(nil)\n");
		}
		printf("Age: %f\n", (*d).age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
