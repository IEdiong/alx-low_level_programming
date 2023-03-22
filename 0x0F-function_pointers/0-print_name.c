/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	char *s;
	void (*ptr)(char *);

	s = name;
	ptr = &f;
	ptr(s);
}
