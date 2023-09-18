#include <stdio.h>
#include "main.h"
/**
 * print_array - prints a string, in reverse
 *
 * @n : number of elements of the array
 *
 * @a : string parameter input
 *
 * Return: nothing
 *
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0 ; i < n ; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
printf("\n");
}
