#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string.
 *
 * Description:
 * This function takes an input string 'str' and capitalizes the first letter
 * of each word in the string where words are separated by specified separators:
 * space, tabulation, newline, ',', ';', '.', '!', '?', '"', '(', ')', '{', and '}'.
 * It modifies 'str' in place.
 *
 * Return: A pointer to the modified string 'str'.
 */

char *cap_string(char *str)
{
int index = 0;
while (str[index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;
if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' |
index == 0)
str[index] -= 32;
index++;
}
return (str);
}

