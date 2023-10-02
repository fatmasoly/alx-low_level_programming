#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Description:
 * This program calculates the cumulative sum of positive integers provided as
 * command-line arguments and prints the sum after processing each argument.
 * If any argument contains non-digit characters or if no arguments are
 * provided, it prints "Error" and returns an error code.
 *
 * Return:
 * - 0 for success (valid arguments and sum calculated)
 * - 1 for an error (invalid arguments or no arguments provided)
 */

int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
return (printf("Error\n"), 1);
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}

