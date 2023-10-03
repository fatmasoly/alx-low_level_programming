#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of characters and initializes it with a
 *                specific character.
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array elements with.
 *
 * Return: A pointer to the newly created array, or NULL if size is 0 or if
 *         memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
return (NULL);
}
arr = (char *) malloc(size * sizeof(char));
if (arr != NULL)
{
for (i = 0 ; i < size ; i++)
{
arr[i] = c;
}
}
return (arr);
}

