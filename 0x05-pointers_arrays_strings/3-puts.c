#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str : string parameter input
 *
 * Return: nothing
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
_puts(*str + '0');
str++;
}
_puts('\n');
}

