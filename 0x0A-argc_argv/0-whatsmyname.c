#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (unused in this example)
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints the name of the program itself, which is
 * stored in argv[0]. It takes argc as a parameter (unused) and uses argv to
 * access the program name.
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}

