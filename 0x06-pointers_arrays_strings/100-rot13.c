#include "main.h"
/**
 *  *rot13 - Encodes a string using the ROT13 algorithm.
 * @str: The string to be encoded.
 *
 * Description:
 * This function takes a null-terminated string as input and applies the ROT13
 * algorithm to it. ROT13 is a simple letter substitution cipher that replaces
 * each letter with the letter 13 positions ahead or behind in the alphabet.
 * Uppercase letters are transformed to uppercase, and lowercase to lowercase.
 * Non-alphabetical characters remain unchanged.
 *
 * Parameters:
 * @str: The input string to be encoded. It must be a null-terminated string.
 *
 * Return:
 * A pointer to the encoded string
 */

char *rot13(char *str)
{
int i;
char orign[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char Rott[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = str;
while (*str)
{
for (i = 0 ; i <= 52 ; i++)
{
if (*str == orign[i])
{
*str = Rott[i];
break;
}
}
str++;
}
return (ptr);
}

