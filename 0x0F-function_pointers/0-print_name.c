/**
 * print_name - prints a name
 * @name: the name to print
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return (NULL);
	f(name);
}
