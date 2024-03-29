#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
