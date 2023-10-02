#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program takes two command-line arguments, multiplies them,
 * and prints the result to the standard output. If the number of arguments is
 * not exactly 3 (including the program name), it prints an error message.
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
int multi;
if (argc == 3)
{
multi = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

