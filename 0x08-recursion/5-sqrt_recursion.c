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
return (calculate_sqrt(n, 1));
}
}
/**
 * calculate_sqrt - Helper function for recursive square root calculation.
 *
 * @n: The original number for which to calculate the square root.
 * @x: The current estimate for the square root.
 *
 * Return: The natural square root of @n if it exists, or -1 if it does not.
 */
int calculate_sqrt(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}
else
{
return (_sqrt_recursion(n, x + 1));
}
}

