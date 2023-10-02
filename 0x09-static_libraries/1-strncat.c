#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string where src will be appended.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to be used from src.
 *
 * Description:
 * concatenates src to the end of dest, using at most n bytes from src
 * If src is longer than n bytes, only the first n bytes from src are appended.
 * The resulting string is null-terminated.
 * If src contains n or more bytes, it does not need to be null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int s, i;
s = 0;
while (dest[s])
s++;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[s + i] = src[i];
dest[s + i] = '\0';
return (dest);
}

