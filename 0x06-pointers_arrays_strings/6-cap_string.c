#include "main.h"
#include <stdio.h>
/**
 * is_lowercase - Checks if a character is a lowercase letter.
 * @ch: The character to check.
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */
int  is_lowercase(char ch)
{
return (ch >= 'a' && ch <= 'z');
}
/**
 * is_delimiter - Checks if a character is a delimiter.
 * @ch: The character to check.
 *
 * Return: true if the character is a delimiter, false otherwise.
 */
int is_delimiter(char ch)
{
char sep[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0 ; i < 12 ; i++)
{
if (ch == sep[i])
{
return (1);
}
}
return (0);
}
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string.
 *
 * Description:
 * This function takes an input string 'str' and capitalizes the first letter
 * ',', ';', '.', '!', '?', '"', '(', ')', '{', and '}'.
 * It modifies 'str' in place.
 *
 * Return: A pointer to the modified string 'str'.
 */
char *cap_string(char *str)
{
char *ptr = str;
int new_word = 1;
while (*str)
{
if (is_delimiter(*ch))
new_word = 1;
else if (is_lowercase(*ch) && new_word)
{
*srt -= 32;
new_word = 0;
}
else
{
new_word = 0;
str++
}
return (ptr);
}
}

