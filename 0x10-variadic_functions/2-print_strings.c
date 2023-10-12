#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print strings separated by a specified separator.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to be printed.
 * @...: Variable number of string arguments.
 *
 * Description: This function prints 'n' strings separated by 'separator'.
 * If 'separator' is NULL, it is not printed. If a string is NULL, it is
 * printed as "(nil)". A newline is added at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
char *str;
va_start(ptr, n);
for (i = 0 ; i < n ; i++)
{
str = va_arg(ptr, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ptr);
}

