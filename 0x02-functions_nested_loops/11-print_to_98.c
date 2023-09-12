#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
for (i = 0 ; i <= 98 ; i++)
{
printf("%d, ", i);
}
printf("\n");
for (i = 98 ; i >= 0 ; i--)
{
printf("%d, ", i);
}
printf("\n");
for (i = 81 ; i <= 98 ; i++)
{
printf("%d, ", i);
}
printf("\n");
for (i = -10 ; i <= 98 ; i++)
{
printf("%d, ", i);
}
printf("\n");
return (0);
}

