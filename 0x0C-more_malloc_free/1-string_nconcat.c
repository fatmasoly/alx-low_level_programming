#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenate two strings, using at most 'n' bytes from s2.
 *
 * @s1: The first string (may be NULL).
 * @s2: The second string (may be NULL).
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i;
size_t len1;
size_t len2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
ptr = malloc(len2 + n + 1);
if (ptr == NULL)
{
return (NULL);
}
strcpy(ptr, s1);
for (i = 0 ; i < n ; i++)
{
ptr[len1 + i] = s2[i];
}
ptr[len2 + n] = '\0';
return (ptr);
}

