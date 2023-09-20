#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Description:
 * function replaces specific letters in the input string 'str' with
 * their corresponding 1337 encoding as follows:
 * 'a' and 'A' -> '4'
 * 'e' and 'E' -> '3'
 * 'o' and 'O' -> '0'
 * 't' and 'T' -> '7'
 * 'l' and 'L' -> '1'
 * It modifies 'str' in place.
 *
 * Return: A pointer to the modified string 'str'.
 */
char *leet(char *str)
{
char *cp = str;
char key[] = {'A', 'E', 'o', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int i;
while (*str)
{
for (i = 0 ; i < sizeof(key) / sizeof(char) ; i++)
{
if (*str == key[i] || *str == key[i] + 32)
{
*str = 48 + value[i];
}
str++
}
}
return (cp);
}
