#include "main.h"
/**
 * _strncpy - Copies a string.
 * @dest: The destination string where src will be copied to.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description:
 * This function copies the first 'n' bytes of src to dest.
 * The resulting string in dest is null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

