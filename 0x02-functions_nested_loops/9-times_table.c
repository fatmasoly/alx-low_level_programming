#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int raw, column, x;
for (raw = 0 ; raw <= 9 ; raw++)
{
for (column = 0 ; column <= 9 ; column++)
{
x = raw * column;
if (column == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
if (x < 10)
{
_putchar(' ');
}
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
}
_putchar('\n');
}
}

