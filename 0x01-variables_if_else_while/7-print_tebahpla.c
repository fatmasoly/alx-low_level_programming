#include <stdio.h>
/**
 * main - Point
 *
 * Description: A C program that prints with lowercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);

}
