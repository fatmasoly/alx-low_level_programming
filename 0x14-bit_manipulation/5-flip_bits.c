#include "main.h"
/**
 * flip_bits - Counts the number of bits to flip to get from 'n' to 'm'.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Description: This function calculates the number of bits that need to be
 * flipped in the binary representation of 'n' to transform it into 'm'. It
 * performs a bitwise XOR between 'n' and 'm' to find differing bits and then
 * counts the set bits in the result to determine the number of flips needed.
 *
 * Return: The count of bits to flip to get from 'n' to 'm.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_res = n ^ m;
unsigned int sum = 0;
while (xor_res)
{
sum += xor_res & 1;
xor_res >>= 1;
}
return (sum);
}

