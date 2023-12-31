#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point for a simple calculator program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments as strings.
 *
 * Return: 0 upon successful execution, various exit statuses on error.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *operator;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);
operation = get_op_func(operator);
result = operation(num1, num2);
printf("%d\n", result);
return (0);
}

