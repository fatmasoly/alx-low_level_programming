#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
int i, ch;
for (i = 0 ; i <= 9 ; i++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
_putchar(ch);
_putchar('\n');
}

return (0);
}

