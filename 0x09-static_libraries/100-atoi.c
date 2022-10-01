#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: 0 if there are no numbers in the string. Otherwise the number.
 */

int _atoi(char *s)
{
	int sign = 1, res = 0, i = 0;

	do {
		while (*(s + i) == '-' || *(s + i) == '+')
			sign = sign * (1 - 2 * (s[i++] == '-'));

		while (*(s + i) >= '0' && *(s + i) <= '9')
		{
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			res = res * 10 + (s[i++] - '0');

			if (!(s[i] >= '0' && s[i] <= '9'))
			{
				return (sign * res);
			}
		}
	} while (s[i++]);

	return (0);
}
