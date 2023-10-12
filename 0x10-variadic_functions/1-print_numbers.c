#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print numbers separated by a specified separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 * @...: Variable number of integer arguments.
 *
 * Description: This function prints 'n' numbers separated by 'separator'.
 * If 'separator' is NULL, it is not printed. A newline is added at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
int num;

va_start(ptr, n);
for (i = 0 ; i < n ; i++)
{
num = va_arg(ptr, int);
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
printf("%d", num);
}
printf("\n");
va_end(ptr);
}

