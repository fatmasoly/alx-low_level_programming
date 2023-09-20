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
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

