#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
