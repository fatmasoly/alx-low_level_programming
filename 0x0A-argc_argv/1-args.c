#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (unused in this example)
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints the number of command-line arguments
 * (excluding the program name itself) to the standard output.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

