#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an integer array.
 *
 * @array: The integer array to perform actions on.
 * @size: The size of the array.
 * @action: A function pointer to the action to be performed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0 ; i < size ; i++)
{
	action(array[i]);
}
}

