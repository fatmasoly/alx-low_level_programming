#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
int a, b;
for (a = 0 ; a < n ; a++)
{
for (b = 0 ; b < n ; b++)
{
if (a == b)
{
_putchar('\\');
}
else
if (a < b)
{
_putchar(' ');
}
_putchar('\n');
}
}
}

