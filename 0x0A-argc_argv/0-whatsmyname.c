#include <stdio.h>
#include "main.h"

/**
 * main - prints the its name followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute((_unused__)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
