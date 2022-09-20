#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed in half
 */

void puts_half(char *str);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
