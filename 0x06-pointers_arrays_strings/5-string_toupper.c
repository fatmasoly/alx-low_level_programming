#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 *
 * Description:
 * takes a string 'str' as input and converts all lowercase letters
 * in the string to their corresponding uppercase letters
 * Non-alphabetical characters remain unchanged.
 *
 * Return: A pointer to the modified string 'str'.
 */
char *string_toupper(char *str)
{
int i;
for (i = 0 ; str[i] != '\0' ; i++)
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
return (str);
}

