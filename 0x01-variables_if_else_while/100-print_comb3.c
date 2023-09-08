#include <stdio.h>
/**
 * main - Point
 *
 * Description: A C program that prints with puts function
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int n1;
int n2;
for (n1 = 0 ; n1 <= 9 ; n1++)
{
for (n2 = n1 + 1 ; n2 <= 9 ; n2++)
{
putchar('0' + n1);
putchar('0' + n2);
if (n1 != 8 || n2 != 9)
{
putchar(',');
putchar(' ');

}

}

}
putchar('\n');
return (0);

}
