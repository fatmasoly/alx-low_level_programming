#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s : string parameter input
 *
 * Return: Reversed string
 *
 */
void print_rev(char *s)
{
char temp;
int l_index, r_index;
while (l_index < r_index)
{
temp = *s[l_index];
*s[r_index] = temp;
l_index++;
r_index--;
_putchar(*s++);
}
_putchar('\n');

}

