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
 * A pointer to the encoded string, which is the same as the input string.
 * If the input string is NULL, the function returns NULL.
 */

char *rot13(char *str)
{
char base;
char c;
int i;
for (i = 0 ; str[i] != '\0' ; i++)
{
char c = str[i];
if ((c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'))
{
char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
}
str[i] = (c - base + 13) % 26 + base;
}
return (str);
}

