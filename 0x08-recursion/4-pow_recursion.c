#include "main.h"
/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 *
 * @x: The base.
 * @y: The exponent.
 *
 * Description: This function recursively calculates the result of x raised
 * to the power of y. If y is less than 0, the function returns -1. The base
 * case is when y is 0, and it returns 1. For positive y, it recursively
 * computes x^y by multiplying x with x^(y-1) until reaching the base case.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, (y - 1)));
}
}

