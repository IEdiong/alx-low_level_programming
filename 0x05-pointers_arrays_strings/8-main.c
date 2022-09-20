#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array to be printed
 * @n: the number of elements to be printed
 */

void print_array(int *a, int n);

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
