#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i, num_ints, num_chars, num_floats;

	va_start(args, format);
	i = num_ints = num_chars = num_floats = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				num_chars++;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				num_ints++;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				num_floats++;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && (num_chars + num_ints + num_floats) > 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
