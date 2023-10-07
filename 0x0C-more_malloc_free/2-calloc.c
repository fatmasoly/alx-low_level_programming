#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - Fills the first 'n' bytes of the memory area pointed to by 's'
 *           with the constant byte 'b'.
 *
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to be set in the memory.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
/**
 * _calloc - Allocates memory for an array of 'nmemb' elements of 'size' bytes
 *           each and initializes the memory with zero.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
_memset(ptr, 0, nmemb * size);
return (ptr);
}

