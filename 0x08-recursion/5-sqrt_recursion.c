#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * @n: The number for which to calculate the square root.
 *
 * Description: This function calculates the natural square root of a
 * non-negative integer @n using an iterative approach. If @n is negative,
 * it returns -1. If @n is 0 or 1, it returns @n. For other values of @n, it
 * iteratively searches for the square root and returns the integer part of
 * the square root if found, or -1 if there is no natural square root.
 *
 * Return: The natural square root of @n if it exists, or -1 if @n is
 * negative or does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
int i = 1;
while (i * i <= n)
{
i++;
}
if ((i - 1) * (i - 1) == n)
{
return (i - 1);
}
else
{
return (-1);
}
}
}

