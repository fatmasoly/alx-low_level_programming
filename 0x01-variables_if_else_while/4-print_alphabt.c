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
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);

}
