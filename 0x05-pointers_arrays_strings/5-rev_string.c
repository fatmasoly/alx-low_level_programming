#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s : string parameter input
 *
 * Return: Reversed string
 *
 */
void rev_string(char *s)
{
char temp;
int length = 0;
int i;
while (s[length] != '\0')
{
length++;
}
for (i = 0 ; i < length / 2 ; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
