#include "main.h"
/**
 * factorial - Computes the factorial of a given number.
 *
 * @n: The number for which to calculate the factorial.
 *
 * Description: This function calculates the factorial of a non-negative
 * integer @n. If @n is less than 0, the function returns -1 to indicate an
 * error. The factorial of 0 is defined as 1, so if @n is 0, it returns 1.
 *
 * Return: The factorial of @n if @n is non-negative, -1 if @n is negative.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

