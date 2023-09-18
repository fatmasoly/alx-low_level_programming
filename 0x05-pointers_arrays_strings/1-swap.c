#include "main.h"
/**
 * swap_int -  a function that takes swaps the values of two integers.
 *
 * @*a & @*b: int parameters
 *
 * Return nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

