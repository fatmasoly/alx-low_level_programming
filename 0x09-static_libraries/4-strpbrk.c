#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: A pointer to the null-terminated string to be searched.
 * @accept: A pointer to a null-terminated string containing the bytes
 *          to search for.
 *
 * Return: A pointer to the first occurrence in the string 's' of any of
 *         the bytes in 'accept', or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}

