#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it is compiled from
 * Return: 0 on Success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
