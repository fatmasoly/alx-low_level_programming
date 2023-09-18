#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str : string parameter input
 *
 * Return: (0)
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
_puts(str);
str++;
}
return (0);
}

