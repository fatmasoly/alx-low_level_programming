#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: A C program that prints specific line by (write function).
 *
 * Return: Always 1 (not success)
*/

int main(void)

{

char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
, write(2, quote, 59);
return (1);

}
