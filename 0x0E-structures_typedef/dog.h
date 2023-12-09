#ifndef DOG
#define DOG
/**
 * struct dog - struct
 * @name: n
 * @age:a
 * @owner: o
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
