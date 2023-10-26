#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed in binary.
 *
 * Description: This function takes an unsigned long integer 'n' and prints its
 * binary representation to the standard output. It iterates through the bits
 * from the most significant bit (MSB) to the least significant bit (LSB) and
 * uses the _putchar function to print '1' or '0 for each bit.
 */
void print_binary(unsigned long int n)
{
int msb = 0;
int bits;
if (n == 0)
{
_putchar('0');
return;
}
bits = sizeof(unsigned long int) * 8;
msb = 1 << (bits - 1);
while (msb > 0)
{
if (n & msb)
{
_putchar('1');
}
else if (n != 0)
{
_putchar('0');
}
msb = msb >> 1;
}
}

