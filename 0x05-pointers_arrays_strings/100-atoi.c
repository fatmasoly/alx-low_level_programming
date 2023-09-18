#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The input string.
 *
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
unsigned int number = 0;
int sign = 1;
while (*s == '-')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
number = (number * 10) + (*s - '0');
s++;
}
return ((number)*(sign));
}
