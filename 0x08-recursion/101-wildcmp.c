#include "main.h"
/**
 * wildcmp - Compares two strings with wildcard '*' character.
 *
 * @s1: The first string for comparison.
 * @s2: The second string for comparison, which can contain '*'.
 *
 * Description: This function compares two strings, @s1 and @s2, with a special
 * wildcard character '*'. The wildcard '*' in @s2 can represent any string
 * (including an empty string). If @s1 and @s2 can be considered identical,
 * taking the wildcard '*' into account, it returns 1; otherwise, it returns 0.
 *
 * Return: 1 if @s1 and @s2 are identical with wildcard '*', 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
return (1);
}
if (*s2 == '\0')
{
return (*s1 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}

