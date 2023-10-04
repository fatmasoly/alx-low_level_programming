#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Concatenate two strings into a newly allocated memory space.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
size_t len1;
size_t len2;
size_t i, j;
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
ptr = malloc(len1 + len2 + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < len1 ; i++)
{
ptr[i] = s1[i];
}
for (j = 0 ; j < len2 ; j++)
{
ptr[i + j] = s2[j];
}
ptr[i + len2] = '\0';
return (ptr);
}

