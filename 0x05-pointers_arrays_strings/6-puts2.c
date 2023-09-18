#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str : string parameter
 *
 * Return: nothing
 *
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
if (i % 2 == 0)
{
_putchar(str[i]);
}
_putchar('\n');
}

