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
char *start_haystack;
char *start_needle;
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
start_haystack = haystack;
start_needle = needle;
while (*start_haystack != '\0' && *start_needle != '\0' && *start_haystack == *start_needle)
{
start_haystack++;
start_needle++;
}
if (*start_needle == '\0')
return (haystack);
haystack++;
}
return (0);
}

