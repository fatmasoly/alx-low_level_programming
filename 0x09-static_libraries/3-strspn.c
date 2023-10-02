#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: A pointer to the null-terminated string to be examined.
 * @accept: A pointer to a null-terminated string containing the characters
 *          to match.
 *
 * Return: The number of bytes in the initial segment of 's' which consist
 *         only of bytes from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; accept[j] != s[i] ; j++)
{
if (accept[j] == '\0')
return (i);
}
}
return (i);
}

