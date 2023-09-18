#include "main.h"
/**
 * int _strlen -  a function that returns the length of a string.
 *
 * @s : string parameter input
 *
 * Return the length of the string
 */
int _strlen(char *s)
{
char str[] = "My first strlen!";
int len;
if (len >= 10)
{
_putchar('0' + len / 10);
_putchar('0' + len % 10);
return (len);
}

