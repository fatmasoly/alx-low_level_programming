#include "main.h"
/**
 * _strlen_recursion - Recursively calculates the length of a string.
 *
 * @s: A pointer to the string for which to find the length.
 *
 * Description: This function recursively counts the number of characters
 * in the string pointed to by @s and returns the length of the string.
 * It starts from the current character and increments the count with each
 * recursive call, stopping when it reaches the null terminator.
 *
 * Return: The length of the string (number of characters).
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return ((1) +  _strlen_recursion(s + 1));
}
}

