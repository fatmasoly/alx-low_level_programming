#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s : string parameter input
 *
 * Return: (0)
 *
 */
void print_rev(char *s)
{
char temp;
int len, l_index, r_index;
len = strlen(*s)
l_index = 0;
r_index = len - 1;
while (l_index < r_index)
{
temp = s[l_index];
s[r_index] = temp;
l_index++;
r_index--;
_putchar(*s);
}
_putchar('\n');
return (0);
}

