#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string where the result is stored.
 * @src: The source string to be appended to the destination.
 *
 * Description:
 * This function concatenates the characters from the 'src' string
 *
 * Return: A pointer to the resulting string 'dest'.
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

