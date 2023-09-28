#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line.
 *
 * @s: A pointer to the string to be printed.
 *
 * Description: This function recursively prints each character of the
 * string pointed to by @s until it reaches the null terminator '\0',
 * at which point it adds a newline character '\n' and terminates.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}

