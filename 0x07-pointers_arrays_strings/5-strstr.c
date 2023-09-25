#include "main.h"
/**
 * _strstr - Locates a substring.
 *
 * @haystack: A pointer to the string in which to search.
 * @needle: A pointer to the substring to locate.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 *         the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
char *sta_haystack;
char *sta_needle;
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
sta_haystack = haystack;
sta_needle = needle;
while (*sta_haystack != '\0' && *sta_needle != '\0' && *sta_haystack == *sta_needle)
{
sta_haystack++;
sta_needle++;
}
if (*sta_needle == '\0')
return (haystack);
haystack++;
}
return (0);
}

