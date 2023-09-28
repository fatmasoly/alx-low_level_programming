#include "main.h"
/**
 * is_prime_number - Checks if an integer is a prime number.
 *
 * @n: The integer to be checked for primality.
 *
 * Description: This function determines whether the input integer @n is
 * a prime number or not. If @n is prime, it returns 1; otherwise, it
 * returns 0. It avoids the use of loops for prime checking.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 * @div: The current divisor being tested.
 */
int check_prime(int n, int div);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
/**
 * check_prime - Helper function for checking if an integer is prime.
 *
 * @n: The integer to be checked for primality.
 * @div: The current divisor being tested.
 *
 * Description: This function is a recursive helper that checks if the
 * input integer @n is a prime number. It iterates through potential
 * divisors starting from 2 up to @n - 1. If @n is divisible by any of
 * these divisors, it returns 0 (not prime). If no divisors are found,
 * it returns 1 (prime).
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int check_prime(int n, int div)
{
if (div >= n && n > 1)
{
return (1);
}
else if (n % div == 0 || n <= 1)
{
return (0);
}
else
{
return (check_prime(n, div + 1));
}
}

