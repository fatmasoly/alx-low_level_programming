
#include "main.h"
/**
 * _strcpy - Copies a string (including the null terminator) from src to dest.
 *
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 *
 * Return: A pointer to dest (the destination buffer).
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
dest[i] = '\0';
}
return (dest);
}

