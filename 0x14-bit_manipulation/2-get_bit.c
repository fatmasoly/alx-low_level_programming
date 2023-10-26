#include "main.h"
/**
 * get_bit - Gets the value of a bit at a specific index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve (0 for the least significant bit).
 *
 * Description: This function retrieves the value of the bit at the specified
 * index in the binary representation of the given unsigned long integer 'n'.
 * It returns the value of the bit (0 or 1) if the index is valid; otherwise,
 * it returns -1.
 *
 * Return: The value of the bit at the specified index, or -1 if the index is
 * out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bits;
bits = sizeof(unsigned long int) * 8;
if (index >= bits)
return (-1);
return (n >> index & 1);
}

