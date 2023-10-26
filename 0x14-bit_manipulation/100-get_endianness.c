#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Description: This function determines the endianness of the system by
 * inspecting the storage order of bytes in a 32-bit integer. If the least
 * significant byte is 1, it indicates a little-endian system; if not, it's a
 * big-endian system.
 *
 * Return: 1 if the system is little-endian, 0 if it's big-endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *ch = (char *)&num;
if (*ch == 1)
return (1);
else
return (0);
}

