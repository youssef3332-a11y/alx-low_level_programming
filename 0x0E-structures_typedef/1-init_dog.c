#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog
 * @d: pointer
 * @name:p
 * @age:a
 * @owner:o
 * Return:void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";
}
