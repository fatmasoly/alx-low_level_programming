#include <stdio.h>
#include "main.h"
/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
int i;
unsigned int first = 1, second = 2, next;
printf("%u", first);
for (i = 2; i < 98; i++)
{
next = first + second;
if (i < 97)
{
printf(", %u", next);
}
else
{
printf("%u\n", next);
}
first = second;
second = next;
}
return (0);
}

