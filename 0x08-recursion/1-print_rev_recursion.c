#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: A pointer to the string to be printed in reverse.
 *
 * Description: This function uses recursion to print the characters
 * of the string pointed to by @s in reverse order. It starts by
 * moving to the end of the string and prints each character as it
 * returns from the recursion, effectively reversing the string.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

