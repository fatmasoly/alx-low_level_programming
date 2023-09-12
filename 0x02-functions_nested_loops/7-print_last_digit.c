#include "main.h"
/**
 * main - Point
 *
 * Description: A C program that prints with puts function
 *
 * Return: Always 0 (success)
*/
int print_last_digit(int n);
{
int lastdigit;
if (lastdigit < 0)
lastdigit = -1 * (n % 10);

else 
lastdigit = n % 10;
_putchar(lastdigit + '0');
return (lastdigit);
}

