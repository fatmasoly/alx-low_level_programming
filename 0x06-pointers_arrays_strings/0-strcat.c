#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string where src will be appended.
 * @src: The source string to be appended to dest.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest,
 * and then adds a new terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int s, s1;
s = 0;
while (dest[s])
s++;
for (s1 = 0 ; src[s1] ; s1++)
dest[s++] = src[s1];
return (dest);
}

