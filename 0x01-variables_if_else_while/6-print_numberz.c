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
int n;
while (n <= 9)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);

}
