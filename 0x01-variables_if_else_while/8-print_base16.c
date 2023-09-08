#include <stdio.h>
/**
 * main - Point
 *
 * Description: A C program that prints hexadecimal
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char x;
x = '0';
while (x <= '9')
{
putchar(x);
x++;
}
x = 'a';
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);

}
