#include <stdio.h>
/**
 * main - Point
 *
 * Description: A C program that prints numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int num;
while (num <= 9)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);

}
