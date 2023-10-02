#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints each command-line argument on a separate
 * line. It takes the number of arguments (argc) and the array of arguments
 * (argv) and uses a while loop to iterate through and print each argument.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}

