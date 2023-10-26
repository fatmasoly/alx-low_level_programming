#include "main.h"
/**
 * clear_bit - Clears (sets to 0) the bit at a specific index.
 * @n: A pointer to the unsigned long integer where the bit will be cleared.
 * @index: The index of the bit to clear (0 for the least significant bit).
 *
 * Description: This function clears the bit at the specified index in binary
 * representation of the unsigned long integer pointed to by 'n'
 * If the index is valid, the bit is cleared, and the function
 * returns 1 to indicate success.
 * If the index is out of range, the function returns -1.
 *
 * Return: 1 on success (bit cleared), -1 if the index is out of range.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int bits;
bits = sizeof(unsigned long int) * 8;
if (index >= bits)
return (-1);
if ((*n >> index) & 1)
*n &= ~(1ul << index);
return (1);
}

