#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @n: The input string to be encoded.
 *
 * Description:
 * function replaces specific letters in the input string 'n' with
 * their corresponding 1337 encoding as follows:
 * 'a' and 'A' -> '4'
 * 'e' and 'E' -> '3'
 * 'o' and 'O' -> '0'
 * 't' and 'T' -> '7'
 * 'l' and 'L' -> '1'
 * It modifies 'str' in place.
 *
 * Return: A pointer to the modified string 'n'.
 */

char *leet(char *n)
{
int i, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}

