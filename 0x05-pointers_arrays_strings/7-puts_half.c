
#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str : string parameter input
 *
 * Return: nothing
 *
 */
void puts_half(char *str)
{
int i;
for (i = 0 ; str[i] != '\0' ; i++)
{
for (i /= 2 ; str[i] != '\0' ; i++)
i++;
_putchar(str[i]);
}
_putchar('\n');
}
