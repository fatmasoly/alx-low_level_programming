#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function.
 *
 * @array: The integer array to search within.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to determine matches.
 *
 * Return: The index of the first matching element,-1 if no match or an error.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, res;
if (size <= 0)
{
return (-1);
}
for (i = 0 ; i < size ; i++)
{
res = cmp(array[i]);
if (res)
{
return (i);
}
}
return (-1);
}

