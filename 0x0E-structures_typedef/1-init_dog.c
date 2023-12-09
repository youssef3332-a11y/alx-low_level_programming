#include <stdio.h>
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
	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";
}
