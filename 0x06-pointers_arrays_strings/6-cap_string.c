#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string.
 *
 * Description:
 * This function takes an input string 'str' and capitalizes the first letter
 * of each word where words are separated by specified separators:
 * ',', ';', '.', '!', '?', '"', '(', ')', '{', and '}'.
 * It modifies 'str' in place.
 *
 * Return: A pointer to the modified string 'str'.
 */

char *cap_string(char *str)
{
int index = 0;
int new_word = 1;
while (str[index])
{
if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
str[index] == ',' || str[index] == ';' || str[index] == '.' ||
str[index] == '!' || str[index] == '?' || str[index] == '"' ||
str[index] == '(' || str[index] == ')' || str[index] == '{' ||
str[index] == '}')
{
new_word = 1;
}
else if (new_word)
{
if (str[index] >= 'a' && str[index] <= 'z')
{
str[index] -= 32;
}
new_word = 0;
}
index++;
}
return (str);
}

