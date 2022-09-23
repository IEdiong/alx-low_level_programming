#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: an integer less than zero if s1 is less than s2,
 * integer greater than zero if s1 is greater than s2 and
 * zero if s1 is equal to s2.
 */

int _strcmp(char *s1, char *s2);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
