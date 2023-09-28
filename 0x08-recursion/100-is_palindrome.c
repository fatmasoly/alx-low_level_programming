#include "main.h"
#include <string.h>
/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked for palindrome property.
 *
 * Description: This function checks if the input string @s is a palindrome,
 * which means it reads the same forwards and backwards (ignoring spaces and
 * punctuation). If @s is a palindrome, it returns 1; otherwise, it returns 0.
 * Return: 1 if @s is a palindrome, 0 otherwise.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison
 */
int check_pal(char *s, int start, int end);
int is_palindrome(char *s)
{
int len = strlen(s);
if (len == 0)
{
return (0);
}
return (check_pal(s, 0, len - 1));
}
/**
 * check_pal - Helper function for checking palindrome property recursively.
 *
 * @s: The string to be checked for palindrome property.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Description: This recursive helper function checks if the substring of @s,
 * defined by the start and end indices, is a palindrome. It performs the
 * comparison character by character, starting from @start and @end, moving
 * inwards. If the substring is a palindrome, it returns 1; otherwise, it
 * returns 0.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_pal(char *s, int start, int end)
{
if (start == end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
if (start < end + 1)
{
return (check_pal(s, start + 1, end - 1));
}
return (1);
}

