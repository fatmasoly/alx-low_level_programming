#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string containing '0' and '1' characters.
 *
 * Return: The converted unsigned int, or 0 if invalid characters are present.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i;
char ch;
if (b == NULL)
{
return (0);
}
for (i = 0 ; b[i] != '\0' ; i++)
{
ch = b[i];
if (ch == '0')
{
num = num << 1;
}
else if (ch == '1')
{
num = (num << 1) | 1;
}
else
{
return (0);
}
}
return (num);
}

