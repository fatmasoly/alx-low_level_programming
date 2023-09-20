#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Description:
 * This function compares the two input strings, s1 and s2.
 * It returns an integer value representing the comparison result:
 *   - 0 if s1 is equal to s2.
 *   - A positive value if s1 is greater than s2.
 *   - A negative value if s1 is less than s2.
 *
 * Return: An integer indicating the comparison result.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}

