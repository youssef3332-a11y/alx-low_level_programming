/**
 * print_name - p
 * @name: k
 * @f: p
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
