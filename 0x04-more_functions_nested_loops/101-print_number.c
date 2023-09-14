
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int nu;
if (n < 0)
{
nu = -n;
_putchar('-');
}
else
{
nu = n;
}

if (nu / 10)
{
print_number(nu / 10);
}

_putchar((nu % 10) + '0');
}

