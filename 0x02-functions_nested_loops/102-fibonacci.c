#include <stdio.h>
#include "main.h"
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 50;
int first = 1, second = 2;
printf("Fibonacci Sequence (first %d numbers):\n", n);
printf("%d, %d, ", first, second);
for (int i = 1 ; i <= 50 ; i++)
{
int next = first + second;
printf("%d", next);
if (i < n - 1)
{
printf(", ");
}
else
{
printf("\n");
}
first = second;
second = next;
}
return (0);
}

