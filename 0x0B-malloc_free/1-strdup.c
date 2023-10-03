#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicate a string in dynamically allocated memory.
 *
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicate string, or NULL
 *         if memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
size_t i;
char *dupl;
size_t len = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
dupl = malloc(len + 1);
if (dupl == NULL)
{
return (NULL);
}
for (i = 0 ; i <= len ; i++)
{
dupl[i] = str[i];
}
return (dupl);
}

