#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s : string parameter input
 *
 * Return: (len)
 *
 */
int _strlen(char *s)
{
int len;
for (len = 0 ; *s != '\0' ; s++)
++len;
return (len);
}
