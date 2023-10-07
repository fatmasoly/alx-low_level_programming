#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers from 'min' to 'max'.
 *
 * @min: The minimum value in the range.
 * @max: The maximum value in the range.
 *
 * Return: A pointer to the allocated array, or NULL on failure
 */
int *array_range(int min, int max)
{
int *ptr;
int i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
{
return (NULL);
for (i = 0 ; min <= max ; i++)
{
ptr[i] = min++;
}
return (ptr);
}
}

