#include "main.h"
/**
 * print_number - A function to print an integer.
 * @n: The integer to be printed.
 *
 * Description:
 * This function prints an integer to the standard output, without using long,
 * arrays, pointers, or hard-coded special values. It handles negative numbers
 * and recursively breaks down the integer to print each digit separately.
 *
 * Parameters:
 * @n: The integer to be printed.
 *
 * Return:
 * Nothing. It outputs the integer to the standard output.
 */

void print_number(int n)
{
unsigned int n0;
n0 = n;
if (n < 0)
{
_putchar('-');
n0 = -n;
}
if (n0 / 10 != 0)
{
print_number(n0 / 10);
}
_putchar('0' + (n0 % 10));
}

