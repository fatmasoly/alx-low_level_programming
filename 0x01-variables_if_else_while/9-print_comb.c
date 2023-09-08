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
int num;
for (num = 0 ; num <= 9 ; num++)
{
	putchar('0' + num);
if (num < 9)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);

}
