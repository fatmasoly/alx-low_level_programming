#include "main.h"
/**
 * set_bit - Sets the bit at a specific index to 1.
 * @n: A pointer to the unsigned long integer where the bit will be set.
 * @index: The index of the bit to set (0 for the least significant bit).
 *
 * Description: This function sets the bit at the specified index to 1 in the
 * binary representation of the unsigned long integer pointed to by 'n'. If
 * the index is valid, the bit is set, and the function returns 1 to indicate
 * success. If the index is out of range, the function returns -1.
 *
 * Return: 1 on success (bit set), -1 if the index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int bits;
bits = sizeof(unsigned long int) * 8;
if (index >= bits)
return (-1);
*n = *n | (1ul << index);
return (1);
}

