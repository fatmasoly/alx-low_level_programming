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
char leet_map[] = "443701";
int i = 0;
int j;
while (str[i])
{
j = 0;
if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
str[i] == 'o' || str[i] == 'O' || str[i] == 't' || str[i] == 'T' ||
str[i] == 'l' || str[i] == 'L')
{
while ("aAeEoOtTlL"[j] != '\0')
{
if (str[i] == "aAeEoOtTlL"[j])
{
str[i] = leet_map[j];
break;
}
j++;
}
}
i++;
}
return (str);
}

