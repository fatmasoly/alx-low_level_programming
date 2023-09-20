#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Description:
 * This function reverses the order of elements in the array 'a'.
 * After the function call, the elements in 'a' will be reversed.
 *
 * Return: No return value (void).
 */
void reverse_array(int *a, int n)
{
int start;
int end;
int temp;
for (start = 0, end = (n - 1) ; start < end ; start++, end--)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;
}
}

